select e.name  AS Employee from Employee e,Employee m where e.managerId= m.id AND e.salary>m.salary;
