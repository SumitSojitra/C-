#include<iostream>
using namespace std;

class X{
	protected :
		int a,b,c,sum=0;
};

class Y : protected X{
	
	public :
		
		void setdata() {
			cout << "Enter A : ";
			cin  >> a;
			cout << "Enter B : ";
			cin  >> b;
			cout << "Enter C : ";
			cin  >> c;
			
			sum = (a*a*a) + (b*b*b) + (c*c*c);
		
		}
		
		void getdata() {
			
			cout << "A = " << a << endl
			     << "B = " << b << endl
			     << "C = " << c << endl << endl;
			cout << "Sum = " << sum; 
		}
	
};

int main() {
	Y y;
	
	y.setdata();
	y.getdata();
}
