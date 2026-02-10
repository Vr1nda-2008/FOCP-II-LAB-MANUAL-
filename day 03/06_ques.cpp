/*An HR system needs to calculate employees’ net salaries, including a fixed 12% bonus for each worker.
 Implement a solution to accept the number of employees and their basic salary.
 Compute bonus, net salary, and display results*/
 #include <iostream>
 #include <string>
using namespace std;

int main()
{
 double basic_salary, bonus, net_salary;
 int num_employees;
 cout<<"enter number of employees: ";
 cin>>num_employees;
 cout<<"enter basic salary of each employee: ";
 cin>>basic_salary;
 bonus = 0.12*basic_salary;
 net_salary = basic_salary + bonus;
 cout<<"bonus of each employee: "<<bonus<<endl;
 cout<<"net salary of each employee: "<<net_salary<<endl;
 cout<<"total bonus of all employees: "<<bonus*num_employees<<endl;
 cout<<"total net salary of all employees: "<<net_salary*num_employees<<endl;
    return 0;
}