#include<iostream>
using namespace std;

class employee {
	
	private :	
		int id;
		string name;
		string role;
		int age;
		int salary;
		double exp;
		string city;
		string companyName;
		
	public : 
		void getemp() { 
		
			cout << "Enter id : ";
			cin >> id;
			cout << "Enter Name : ";
			cin >> name;
			cout << "Enter role : ";
			cin >> role;
			cout << "Enter age : ";
			cin >> age;
			cout << "Enter salary : ";
			cin >> salary;
			cout << "Enter experience : ";
			cin >> exp;
			cout << "Enter city : ";
			cin >> city;
			cout << "Enter compony name : ";
			cin >> companyName;
			
		}
		
		void putemp() {
			
			cout << "ID           : " << id << endl
				 << "Name		  : " << name << endl
				 << "role 		  : " << role << endl
				 << "age 	      : " << age << endl
				 << "salary 	  : " << salary << endl
				 << "experience   : " << exp << endl
				 << "city 		  : " << city << endl
				 << "compony name : " << companyName << endl;
			
		}
		
};

int main() {
	
	employee e1,e2,e3,e4,e5;
	
	e1.getemp();
	e2.getemp();
	e3.getemp();
	e4.getemp();
	e5.getemp();
	
	e1.putemp();
	e2.putemp();
	e3.putemp();
	e4.putemp();
	e5.putemp();
	
}
