#include<iostream>
using namespace std;

class math {
	protected :
	int a,b;
	string esc = "Cannot divide by ZERO";
	
	public:
		
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
			catch(...){
				cout << "It Can't divided by Symbol & Character" << endl;
			}
		}
};

int main() {
	math m1;
	
	m1.setdataM();
	m1.div();
}
