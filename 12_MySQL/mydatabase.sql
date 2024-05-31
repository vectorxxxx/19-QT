mysql -u root -p
root

- 创建数据库
create database mydatabase;
show databases;
use mydatabase;

- 创建表
create table student(
  id int unsigned primary key,
  name varchar(16) not null,
  birth date
) default charset utf8; 
describe student;

- 插入数据
insert into student values(1, '张三', '1990-01-01');
insert into student values(2, '李四', '1991-02-01');
insert into student values(3, '王五', '1992-03-01');

- 查询数据
select * from student;