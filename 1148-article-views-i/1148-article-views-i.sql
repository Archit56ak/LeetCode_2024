# Write your MySQL query statement below
Select distinct author_id as id 
FROM Views 
where author_id=viewer_id 
ORDER BY author_id;