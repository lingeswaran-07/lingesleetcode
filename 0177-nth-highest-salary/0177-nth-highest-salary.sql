CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
DETERMINISTIC
BEGIN
DECLARE off INT;
  SET off = N - 1; 
  RETURN (
      SELECT salary FROM (
          SELECT DISTINCT salary 
          FROM Employee
          ORDER BY salary DESC 
          LIMIT 1 OFFSET off 
      ) as getNthHighestSalary
  );
END;
