# Write your MySQL query statement below
select e.unique_id,em.name from Employees em left join EmployeeUNI e on em.id=e.id ;