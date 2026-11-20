# Write your MySQL query statement below
SELECT R.contest_id, 
ROUND((COUNT(R.user_id) * 100.00) / (SELECT COUNT(user_id) FROM Users), 2) AS percentage
FROM Register R
GROUP BY R.contest_id
ORDER BY percentage DESC, R.contest_id ASC