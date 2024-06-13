# Write your MySQL query statement below
SELECT uni.unique_id as unique_id, emp.name as name
FROM Employees emp LEFT JOIN
EmployeeUNI uni on uni.id=emp.id;