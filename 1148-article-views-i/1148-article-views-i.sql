# Write your MySQL query statement below
select a.author_id as id
from views as a join views as b
on a.author_id = b.author_id
where a.author_id = b.viewer_id
group by a.author_id
order by a.author_id