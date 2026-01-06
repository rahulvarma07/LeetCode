# Write your MySQL query statement below
select a.machine_id,round(sum(a1.timestamp  - a.timestamp) / count(a.machine_id) , 3) as processing_time
from Activity a join Activity a1 on
a.activity_type = 'start' and a1.activity_type = 'end'
and a.process_id = a1.process_id
and a.machine_id = a1.machine_id
group by a.machine_id