# Write your MySQL query statement 
# 101 => {102, 103, 104, 105, 106}

SELECT E1.name
FROM Employee E1 
LEFT JOIN Employee E2 
ON E1.id = E2.managerID
GROUP BY E1.id 
HAVING COUNT(E2.managerId) >= 5