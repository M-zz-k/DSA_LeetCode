-- Write your PostgreSQL query statement below
SELECT email from Person group by email having count(*)>1; 