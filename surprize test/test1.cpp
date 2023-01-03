#include<iostream>
using namespace std;

class A {
	protected :
		int a,c;
	public:

	void func() {
		cout << "Enter value of A : ";
		cin  >> a;
	}
};

class B {
	protected :
		int b;
	
	public:

	void func() {
		cout << "Enter value of B : ";
		cin  >> b;
	}
};

class C: public A, public B {
		int c;
		public :
			
		void sum() {
			c = a + B::b;
			cout << "Sum of " << a << " And " << b << " is :" << c << endl;
		}
};

int main() {

	C c;

	c.A::func();
	c.B::func();
	c.sum();

}

