# Write your MySQL query statement below
Select name, ifnull(sum(distance),0) travelled_distance
from users left join rides
on users.id = rides.user_id
group by user_id
order by travelled_distance desc, name