# Write your MySQL query statement below
# P.product_id, P.price as average_price
Select P.product_id, 
CASE 
WHEN (SUM(U.units) = 0 || SUM(U.units) IS NULL) THEN 0
ELSE ROUND( SUM(U.units * P.price) / SUM(U.units), 2)
END AS average_price
FROM Prices P LEFT JOIN UnitsSold U 
ON P.product_id = U.product_id AND U.purchase_date BETWEEN P.start_date AND P.end_date
GROUP BY P.product_id