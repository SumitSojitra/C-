#include<iostream>
using namespace std;

class add{
	public :
		
		void cal() {
			cout << "   Sumit\n============\n" << endl;
		}
		void cal(int a) {
			cout << "A              = " << a << endl; 
		}
		void cal(int a,int b) {
			cout << "Substraction   = " << a-b << endl;
		}
		void cal(int a,int b,int c) {
			cout << "Addition       = " << a+b+c << endl; 
		}
		void cal(int a,int b,int c,int d) {
			cout << "MultiPlication = " << a*b*c*d << endl;
		}
};

int main() {
	add a1;
	
	
	a1.cal();
	a1.cal(0);
	a1.cal(0,1);
	a1.cal(0,1,2);
	a1.cal(0,1,2,3);
	
}
