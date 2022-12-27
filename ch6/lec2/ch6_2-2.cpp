#include<iostream>
using namespace std;

class A {
	protected :
		int a;
		
	public :
		
		void setdataA() {	
			cout << "Enter value of a : ";
			cin  >> a;
		}
};

class B : public A {
	protected :
		int b;
		
	public :
		
		void setdataB() {
			cout << "Enter value of b : ";
			cin  >> b;
		}
};

class C : public A {
	protected :
		int c;
		
	public :
		void setdataC() {
			cout << "Enter value of c : ";
			cin  >> c;
		}
};

class D : public B , public C {
	protected :
		int d;
		
	public :
		void setdataD() {
			cout << "Enter value of d : ";
			cin  >> d;
		}
   
		
		void getdata() {
			
			cout << "SUM : " << B::a + b + c + d << endl;
	    }
};

int main() {
	D d;
	
	d.B::setdataA();
	d.setdataB();
	d.setdataC();
	d.setdataD();
	d.getdata();
	
}
