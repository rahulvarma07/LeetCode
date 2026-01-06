# Write your MySQL query statement below
select E2.product_name, E1.year, E1.price
from Sales E1 left join Product E2
ON E1.product_id = E2.product_id 