# Write your MySQL query statement below
select w1.id
from Weather w1 join Weather w2 on
w1.recordDate = DATE_ADD(w2.recordDate, INTERVAL 1 DAY) 
and w2.temperature  < w1.temperature
