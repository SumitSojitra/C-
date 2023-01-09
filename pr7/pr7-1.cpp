#include<iostream>
using namespace std;

class A{
	int a;
	
	public :
		void setdataA() {
			cout << "Enter value of A : ";
			cin  >> a;
		}
		
		virtual void getdataA() {
			cout << "A : " << a << endl;
		}
};
class B : public A{
	int b;
	
	public :
		void setdataB() {
			cout << "Enter value of B : ";
			cin  >> b;
		}
		
		virtual void getdataB() {
			cout << "B : " << b << endl;
		}
};


int main() {
	
	A *a1;
	B b1;
	
	a1 = &b1;
	
	a1->setdataA();
	b1.setdataB();
	
	a1->getdataA();
	
}
