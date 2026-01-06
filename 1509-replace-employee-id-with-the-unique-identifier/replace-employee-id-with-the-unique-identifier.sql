# Write your MySQL query statement below
select E1.unique_id, E2.name
from Employees E2 left join EmployeeUNI E1
ON E2.id = E1.id