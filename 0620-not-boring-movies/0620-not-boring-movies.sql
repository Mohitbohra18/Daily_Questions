# Write your MySQL query statement below
select * 
from Cinema c
where c.id%2=1
AND not c.description = "boring"
order by c.rating  desc;