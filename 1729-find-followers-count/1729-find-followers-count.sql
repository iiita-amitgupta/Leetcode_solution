# Write your MySQL query statement below
Select user_id, count(follower_id) as followers_count
From Followers
Group by user_id
order by user_id