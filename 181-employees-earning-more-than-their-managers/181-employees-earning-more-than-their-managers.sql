# Write your MySQL query statement below
select e1.name as Employee
from employee as e1, employee as e2
where e1.managerId = e2.id AND e1.salary > e2.salary