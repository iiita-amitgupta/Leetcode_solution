# Write your MySQL query statement below
Select *
From Cinema
Where id%2 = 1 AND description != "boring"
Order by rating desc