# Write your MySQL query statement below
Select name 
from customer
where id NOT in
(SELECT id from customer where referee_id=2);