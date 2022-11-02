select Department.name as Department, Employee.name as Employee, salary as Salary from Employee join Department on Department.id  = Employee.departmentId 
where(departmentId , salary) in (select departmentId , max(salary) as Salary from Employee group by departmentId)
