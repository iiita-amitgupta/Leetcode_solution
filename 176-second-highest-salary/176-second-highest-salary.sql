# Write your MySQL query statement below
# select Max(salary) as SecondHighestSalary
# from employee
# where salary < (select Max(salary)
# from employee)
SELECT
IFNULL(
(SELECT DISTINCT salary
FROM Employee
ORDER by salary DESC 
limit 1 offset 1)
,NULL
)as SecondHighestsalary