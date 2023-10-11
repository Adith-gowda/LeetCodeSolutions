# Write your MySQL query statement below
select id,movie,description,rating from Cinema where (not description="boring" and mod(id,2)) order by rating desc;