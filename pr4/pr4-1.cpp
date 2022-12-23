#include<iostream>
using namespace std;

ostream &t (ostream & output) {
	return output << "\t";
}

class emp{
	
	private :
		
		int id,salary;
		string name,role,address,email,No;
		double exp;
		
	public :
		
		void setdata(int i) {
			
			system("cls");
			
			cout << "Employee : " << i << "/5" << endl; 
			cout << "Enter employee id : ";
			cin  >> id;
			cout << "Enter employee name : ";
			cin  >> name;
			cout << "Enter employee role : ";
			cin  >> role;
			cout << "Enter employee salary : ";
			cin  >> salary;
			cout << "Enter employee exprience : ";
			cin  >> exp;
			cout << "Enter employee address : ";
			cin  >> address;
			cout << "Enter employee e-mail : ";
			cin  >> email;
			cout << "Enter employee contact number : ";
			cin  >> No; 
		}
		
		void getData() {
			
			cout << id << t << name << t << role << t << salary << t << exp << t << address << t << email << t << t << No << endl;
			
		}
		
		static header() {
			system("cls");
			cout << "Id\tname\trole\tsalary\texp\taddress\temail\tmobileNo\n======= ======= ======= ======= ======= ======= ======= ========\n";
		}
};

int main() {
	
	emp e[5];
	
	for(int i=0; i<5; i++) {
		e[i].setdata(i+1);
	}
	
	emp::header();
	
	for(int i=0; i<5; i++) {
		e[i].getData();
	}
	
}
