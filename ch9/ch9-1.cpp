#include<iostream>
#include<string.h>
using namespace std;

class math{
	protected:
	int a,b;
	
	string esc = "Cannot divide by ZERO";
	public :
		math() {
			cout << "Start the Program.." << endl;
		}
		
		void setdataM() {
			cout << "Enter a : ";
			cin  >> a;
			cout << "Enter b : ";
			cin  >> b;
		}
		void div() {
			try{
				if(b==0) {
					throw esc;
				}
				else {
					cout << "Division is : " << a/b << endl;
				}
			}
			catch(string esc) {
				cout << esc << endl;
			}
			
		}
		
};

class age : public math{
	string msg = "You cannot eligible for voting!!";
	int a;
	
	public :
		void setdataAge() {
			cout << "===============================\n";
			cout << "Enter Your Age : ";
			cin  >> a;
		}
		void checkAge() {
			try {
				if(a<18) {
					throw msg;
				}
				else{
					cout << "You eligible for voting :)" << endl;
				}
			}
			catch(string msg) {
				cout << msg << endl;
			}
		}
		
};

class password : public age{
	char a[10];
	int c=0;
	string mes = "password must be contain one UPPERCASE Letter!!";
	
	public :
		void setdataPsw() {
			cout << "==============================\n";
			cout << "Enter Your Password : ";
			cin  >> a;  
		}
		void psw() {
			try {
				for(int i=0; i<=strlen(a); i++) {
					if(a[i]>=65 && a[i]<=90){
						c++;
					}
				}
		
			if(c>0) {
				cout << "Password is Valid" << endl;
			}
			else {
				throw mes;
			}
			}
			catch(string mes) {
				cout << mes << endl;
			}
		}
		~password() {
			cout << endl << "End the Program..";
		}
	
};

int main() {
	password p1;
	
	p1.setdataM();
	p1.div();
	
	p1.setdataAge();
	p1.checkAge();
	
	p1.setdataPsw();
	p1.psw();
	
}

