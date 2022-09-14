# Write your MySQL query statement below
# select DISTINCT p1.Email as Email
# from person as p1, person as p2
# where p1.email = p2 .email and p1.id != p2.id;

select email as Email
from person
group by email
having count(email) > 1;