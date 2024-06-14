# Write your MySQL query statement below
SELECT pro.product_name, Sale.year, Sale.price
FROM Sales AS Sale, Product AS pro
where Sale.product_id = pro.product_id;