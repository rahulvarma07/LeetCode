# Write your MySQL query statement below
# S.student_id, S.student_name, Sub.subject_name, COUNT(S.student_id) as subject_name
SELECT S.student_id, S.student_name, Sub.subject_name, COUNT(E.subject_name) as attended_exams
FROM Students S CROSS JOIN Subjects Sub 
LEFT JOIN Examinations E
ON S.student_id = E.student_id AND Sub.subject_name = E.subject_name
GROUP BY Sub.subject_name, S.student_id
ORDER BY S.student_id, Sub.subject_name