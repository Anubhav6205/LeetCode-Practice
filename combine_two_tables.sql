/* Write your PL/SQL query statement below */
select Person.FirstName,Person.lastName,Address.city,Address.state  from Person LEFT OUTER JOIN Address on Person.personId=Address.personId;