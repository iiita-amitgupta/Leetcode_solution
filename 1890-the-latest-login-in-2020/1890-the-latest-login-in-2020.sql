# Write your MySQL query statement below
# select user_id, max(time_stamp) as last_stamp
# from Logins
# where time_stamp >= '2020-01-01 00:00:01' AND time_stamp <= '2020-12-31 23:59:59'
# group by user_id
SELECT user_id, MAX(time_stamp) as 'last_stamp'
FROM Logins

WHERE YEAR(time_stamp)='2020'
GROUP BY user_id