-- Write your PostgreSQL query statement below
Select e.name as Employee from Employee as e join Employee as n on e.managerId = n.id where e.salary > n.salary;