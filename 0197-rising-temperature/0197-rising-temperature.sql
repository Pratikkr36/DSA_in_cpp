# Write your MySQL query statement below
select t.id as Id
from Weather y
cross join Weather t
where datediff(t.recordDate, y.recordDate) = 1 
AND t.temperature > y.temperature;