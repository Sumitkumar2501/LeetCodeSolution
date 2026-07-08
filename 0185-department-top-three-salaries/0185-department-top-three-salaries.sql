# Write your MySQL query statement below
select 
    department.name as department,
    employee.name as employee,
    salary
from
    employee,
    department
where
    employee.departmentid = department.id
    and(
        select
            count(distinct e2.salary)
        from employee as e2
        where e2.salary > employee.salary and employee.departmentid = e2.departmentid
    ) < 3;