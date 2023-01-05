#include<iostream>
using namespace std;

class Admin{
	
	protected :
		string name,can_terminate;
		int employee_salary,total_staff,manager_salary;
	int total_annual_revenue;

		Admin() {
			name = "TATA";
			manager_salary = 10000;
			employee_salary = 6000;
			total_staff = 12;
			total_annual_revenue = 100000;
			can_terminate = "Manager & employee";
		}
		void myAccess() {
			cout << "Compony name          : " << name << endl
				 << "Manager Salary        : " << manager_salary << endl
				 << "Employee Salary       : " << employee_salary << endl
				 << "Total Staff           : " << total_staff << endl
				 << "Total annnual revenue : " << total_annual_revenue << endl
				 << "Can terminate         : " << can_terminate << endl;
		}
};
	
class Manager : protected Admin {

	protected :
		void myAccess() {
			Admin::myAccess();
			cout << endl << "Compony name          : " << name << endl
				 << "Manager Salary        : " << manager_salary << endl
				 << "Employee Salary       : " << employee_salary << endl
				 << "Total Staff           : " << total_staff << endl
				 << "Can terminate         : Employees " << endl;
		}
		
};

class Employee : private Manager {
	public :
		void myAccess() {
			cout << endl << "Compony name          : " << name << endl
				 << "Employee Salary       : " << employee_salary << endl;
		}
};

int main() {
	
	Employee e1;
	
	e1.Manager :: myAccess();
	e1.myAccess();

	
}
