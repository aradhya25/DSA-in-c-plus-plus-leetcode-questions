# Write your MySQL query statement below
select pro.product_name,s.year,s.price from Sales s inner join Product pro on pro.product_id=s.product_id;