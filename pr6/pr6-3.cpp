#include<iostream>
using namespace std;

class A {
    public:
	    int a,b;
	    void print() {
	        cout << "===================Addition===================" << endl;
	        cout << "Enter the velue of A : ";
	        cin  >> a;
	        cout << "Enter the velue of B : ";
	        cin  >> b;
	        cout << "addition is := " << a+b << endl;
	    }
};
class B : public A {
    public:
	    void print() 
	    {
	        cout << endl << "===================Minus===================" << endl;
	        cout << "Enter the velue of A : ";
	        cin  >> a;
	        cout << "Enter the velue of B : ";
	        cin  >> b;
	        cout << "minus is := " << a-b << endl;
	    }
};
int main() {
    B B1, B2;
    B2.A::print();
    B1.print();
}
