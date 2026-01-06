# Write your MySQL query statement below
select E1.customer_id, Count(E1.customer_id) as count_no_trans
from Visits E1 left join Transactions E2
ON E1.visit_id = E2.visit_id
where E2.transaction_id is null
group by E1.customer_id