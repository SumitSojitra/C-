#include<iostream>
using namespace std;

class two;

class one{
	
	private: 
		int a;
		
	public:
		
		void setdata() {
			
			cout << "Enter Value of A : ";
			cin  >> a;
		
		}
		
		friend void sum(one,two);
};

class two{
	
	private: 
		int b;
		
	public:
		
		void setdata() {
			
			cout << endl << "Enter Value of B : ";
			cin  >> b;
			
		}
		
		friend void sum(one,two);
};

void sum(one o,two t) {
	cout << endl << "=============================================================\n" <<  endl
		 		 << "Addition of A + B is : " << o.a + t.b;
}

int main() {
	
	one o;
	two t;
	
	o.setdata();
	t.setdata();
	
	sum(o,t);
	
}
