#include<iostream>
using namespace std;

class A {
	int a;
	
	public :
			void setdataA() {
			cout << "Enter Value of A : ";
			cin  >> a;
		}
		
		void getdataA() {
			cout << "A : " << a << endl;
		}
};

class B : virtual public A{
	int b;
	
	public :
		void setdataB() {
			cout << "Enter Value of B : ";
			cin  >> b;
		}
		
		void getdataB() {
			cout << "B : " << b << endl;
		}
};

class C : virtual public A{
	int c;
	
	public :
		void setdataC() {
			cout << "Enter Value of C : ";
			cin  >> c;
		}
		
		void getdataC() {
			cout << "C : " << c << endl;
		}
};

class D : public B,public C {
	int d;
	
	public :
		void setdataD() {
			cout << "Enter Value of D : ";
			cin  >> d;
		}
		void getdataD() {
			cout << "D : " << d << endl;
		}
};

int main() {
	D d1;
	
	d1.setdataA();
	d1.setdataB();
	d1.setdataC();
	d1.setdataD();
	
	d1.getdataA();
	d1.getdataB();
	d1.getdataC();
	d1.getdataD();
}
