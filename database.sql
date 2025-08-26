-- Student Records Management System
-- Oracle DB Schema (Starter Version)
-- Author: Prajwal Subramanya S N

CREATE TABLE students (
    student_id NUMBER PRIMARY KEY,
    name VARCHAR2(100),
    course VARCHAR2(50),
    gpa NUMBER(3,2)
);

-- Insert sample data (can be extended later)
INSERT INTO students (student_id, name, course, gpa) VALUES (1, 'Alice', 'Computer Science', 8.5);
INSERT INTO students (student_id, name, course, gpa) VALUES (2, 'Bob', 'Information Science', 7.9);
