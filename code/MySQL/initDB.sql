use ticketmaster;
-- 折扣(选项,金额)
create table Discount(
	dChoose char(9) PRIMARY KEY,
	dMoney smallint
);

-- 用户表(票号, 游览时间, 优惠选项, 票状态)
create table UserTicket(
	uTicketId int PRIMARY KEY, 
	uUseDate date, 
	dChoose char(9), 
	uStatus char(9),
	FOREIGN KEY(dChoose) REFERENCES Discount(dChoose)
);

-- 交易记录表(序号, 票号, 用户名, 交易属性, 交易时间, 优惠选项)
create table TradeRecord(
	tTradeId int PRIMARY KEY, 
	uTicketId int,
	tUserId char(32),
	tReature char(9),
	tDate DATE,
	dChoose char(9),
	FOREIGN KEY(uTicketId) REFERENCES  	UserTicket(uTicketId),
	FOREIGN KEY(dChoose) REFERENCES 		Discount(dChoose)
);




'


'
-- 由输入的游览日期,优惠选项,当前用户名进行购票
CREATE PROCEDURE procBuyTicket(in useDate DATE, in choose CHAR(9), in userName CHAR(32))
begin
	declare maxTradeId int;
	declare maxTicketId int;
	set maxTradeId= (select MAX(tTradeId) from traderecord)+1;
	set maxTicketId= (select MAX(uTicketId) from userticket)+1;
	
	insert into UserTicket
	values(maxTicketId,useDate,choose,'已付款');
	insert into traderecord
	VALUES(maxTradeId,maxTicketId,userName,'购票',curdate(),choose);
end;

-- drop procedure procBuyTicket;
-- call procBuyTicket('2019-01-10','成人','user');

-- 由输入的票号进行退票
Create procedure procRefund(ticketId int)
BEGIN 
	declare maxTradeId int;
	declare choose char(9);
	declare userName char(32);
	
	set maxTradeId= (select MAX(tTradeId) from traderecord)+1;
	set choose=(SELECT dChoose from traderecord where (TradeRecord.uTicketId=ticketId));
	set userName=(SELECT tUserId  from traderecord where (TradeRecord.uTicketId=ticketId));
	
	INSERT into  traderecord
	VALUES(maxTradeId,ticketId,userName,'退票',CURDATE(),choose);
	
	UPDATE UserTicket set uStatus ='已退款' WHERE userticket.uTicketId=ticketId;
end;

-- drop procedure procRefund;
-- call procRefund(3)

-- 统计指定日期各种价格的门票销售
CREATE PROCEDURE procCntDaySold(cntDate DATE,choose CHAR(9))
begin
	DECLARE saleMoney INT;
	DECLARE saleNum INT;
	DECLARE refundMoney INT;
	DECLARE refundNum INT;
	if choose='所有' THEN
	BEGIN
		(SELECT sum(dMoney),count(*)
			into saleMoney,saleNum
			FROM  Discount,TradeRecord
			where TradeRecord.dChoose=discount.DChoose AND
				TradeRecord.tTradeDate=cntDate AND 
				TradeRecord.tReature='购票');
				
		(SELECT sum(dMoney),count(*)
			into refundMoney,refundNum
			FROM  Discount,TradeRecord
			where TradeRecord.dChoose=discount.DChoose AND
				TradeRecord.tTradeDate=cntDate AND 
				TradeRecord.tReature='退票');
	end;
	else 
	BEGIN
		(SELECT sum(dMoney),count(*)
			into saleMoney,saleNum
			FROM  Discount,TradeRecord
			where TradeRecord.dChoose=discount.DChoose AND
				TradeRecord.tTradeDate=cntDate AND 
				TradeRecord.tReature='购票' AND 
				TradeRecord.dChoose=choose);
				
		(SELECT sum(dMoney),count(*)
			into refundMoney,refundNum
			FROM  Discount,TradeRecord
			where TradeRecord.dChoose=discount.DChoose AND
				TradeRecord.tTradeDate=cntDate AND 
				TradeRecord.tReature='退票' AND 
				TradeRecord.dChoose=choose);
	end;
 	end if;
	
		if saleNum=0 then 
			set saleMoney=0;
		end if;
		if refundNum=0 then
			set refundMoney=0;
		end if;
		set saleMoney=saleMoney-refundMoney;
		set saleNum=saleNum-refundNum;
		select saleMoney,saleNum;
end;

-- 测试输出参数
CREATE PROCEDURE procCntDaySold(in cntDate DATE,in choose CHAR(9),out money int, out num int)
begin
	DECLARE saleMoney INT;
	DECLARE saleNum INT;
	DECLARE refundMoney INT;
	DECLARE refundNum INT;
	
	if choose='所有' THEN
	BEGIN
		(SELECT sum(dMoney),count(*)
			into saleMoney,saleNum
			FROM  Discount,TradeRecord
			where TradeRecord.dChoose=discount.DChoose AND
				TradeRecord.tTradeDate=cntDate AND 
				TradeRecord.tReature='购票');
				
		(SELECT sum(dMoney),count(*)
			into refundMoney,refundNum
			FROM  Discount,TradeRecord
			where TradeRecord.dChoose=discount.DChoose AND
				TradeRecord.tTradeDate=cntDate AND 
				TradeRecord.tReature='退票');
	end;
	else 
	BEGIN
		(SELECT sum(dMoney),count(*)
			into saleMoney,saleNum
			FROM  Discount,TradeRecord
			where TradeRecord.dChoose=discount.DChoose AND
				TradeRecord.tTradeDate=cntDate AND 
				TradeRecord.tReature='购票' AND 
				TradeRecord.dChoose=choose);
				
		(SELECT sum(dMoney),count(*)
			into refundMoney,refundNum
			FROM  Discount,TradeRecord
			where TradeRecord.dChoose=discount.DChoose AND
				TradeRecord.tTradeDate=cntDate AND 
				TradeRecord.tReature='退票' AND 
				TradeRecord.dChoose=choose);
	end;
 	end if;
	
		if saleNum=0 then 
			set saleMoney=0;
		end if;
		if refundNum=0 then
			set refundMoney=0;
		end if;
		set money=saleMoney-refundMoney;
		set num=saleNum-refundNum;
-- select @money,@num;
end;


drop PROCEDURE procCntDaySold;
call procCntDaySold('2019-01-14','所有');
call procCntDaySold('2019-01-12','所有');
call procCntDaySold('2019-01-12','成人',);



CREATE PROCEDURE test()
begin 
	DECLARE money int;
	DECLARE num int;
	call procCntDaySold('2019-01-14','所有',money,num);
	-- call procCntDaySold('2019-01-12','所有',0,0);需要有两个边量, 只能在
	select money,num;
end;
call test();

-- 统计指定月份的各种门票销售
CREATE	PROCEDURE procCntMonthSold(cntMonth CHAR(4),choose CHAR(9))
BEGIN
	DECLARE saleMoney INT;
	DECLARE saleNum INT;
	DECLARE refundMoney INT;
	DECLARE refundNum INT;
	if choose='所有' THEN
	BEGIN
		(SELECT sum(dMoney),count(*)
			into saleMoney,saleNum
			FROM  Discount,TradeRecord
			where TradeRecord.dChoose=discount.DChoose AND
				Month(TradeRecord.tTradeDate)=cntMonth AND -- 截取月份
				TradeRecord.tReature='购票');
				
		(SELECT sum(dMoney),count(*)
			into refundMoney,refundNum
			FROM  Discount,TradeRecord
			where TradeRecord.dChoose=discount.DChoose AND
				month(TradeRecord.tTradeDate)=cntMonth AND  -- 截取月份
				TradeRecord.tReature='退票');
		
		if saleNum=0 then 
			set saleMoney=0;
		end if;
		if refundNum=0 then
			set refundMoney=0;
		end if;
		-- 错误修改
		set saleMoney=saleMoney-refundMoney;
		set saleNum=saleNum-refundNum;
		select saleMoney,saleNum;
		end;
		else
		BEGIN
		(SELECT sum(dMoney),count(*)
			into saleMoney,saleNum
			FROM  Discount,TradeRecord
			where TradeRecord.dChoose=discount.DChoose AND
				month(TradeRecord.tTradeDate)=cntMonth AND 
				TradeRecord.tReature='购票' AND 
				TradeRecord.dChoose=choose);
				
		(SELECT sum(dMoney),count(*)
			into refundMoney,refundNum
			FROM  Discount,TradeRecord
			where TradeRecord.dChoose=discount.DChoose AND
				month(TradeRecord.tTradeDate)=cntMonth AND 
				TradeRecord.tReature='退票' AND 
				TradeRecord.dChoose=choose);
		if saleNum=0 then 
			set saleMoney=0;
		end if;
		if refundNum=0 then
			set refundMoney=0;
		end if;
		-- 错误修改
		set saleMoney=saleMoney-refundMoney;
		set saleNum=saleNum-refundNum;
		select saleMoney,saleNum;
	  end;
  end if;
end;

drop PROCEDURE procCntMonthSold;
call procCntMonthSold('01','老人');
-- select month(tTradeDate) from traderecord; 



			

