CREATE OR REPLACE FUNCTION NthHighestSalary(N INT) RETURNS TABLE (Salary INT) AS $$
BEGIN

    IF N < 1 THEN 
   RETURN Query SELECT CAST(NULL AS int);
    ELSE 
    return query(
   SELECT (SELECT DISTINCT e.salary FROM Employee as e ORDER BY e.salary DESC LIMIT 1 OFFSET n-1 ) 
    
    ); 
  END IF;
END;
$$ LANGUAGE plpgsql;