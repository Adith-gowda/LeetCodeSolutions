# Write your MySQL query statement below
select u.unique_id, e.name from Employees as e LEFT JOIN EmployeeUNI as u ON e.id=u.id;