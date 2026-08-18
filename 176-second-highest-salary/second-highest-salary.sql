SELECT max(salary) AS SecondHighestSalary FROM Employee WHERE salary < (SELECT max(salary) FROM Employee);
-- SELECT (SELECT DISTINCT salary FROM Employee ORDER BY salary DESC LIMIT 1 OFFSET 1) AS SecondHighestSalary;
