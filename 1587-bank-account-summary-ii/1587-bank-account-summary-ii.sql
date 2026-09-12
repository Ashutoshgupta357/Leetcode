-- # Write your MySQL query statement below
select U.name,sum(T.amount) as balance from Users U  natural join Transactions T group by U.name having sum(T.amount)>10000;
