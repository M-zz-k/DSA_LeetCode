-- Write your PostgreSQL query statemen
SELECT score,  DENSE_RANK() OVER (ORDER BY score DESC) as rank from Scores;