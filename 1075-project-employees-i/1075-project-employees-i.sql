# Write your MySQL query statement below
select p.project_id,Round(Avg(e.experience_years),2) as average_years from Project p  natural join Employee e group by p.project_id ;

