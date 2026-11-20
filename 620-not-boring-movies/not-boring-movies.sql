# Write your MySQL query statement below
SELECT id, movie, description, rating 
FROM Cinema 
WHERE id % 2 != 0 AND description != 'BORING'
ORDER BY rating DESC;