#include<iostream>
using namespace std;

class pre {
	protected : 
		int a;
	public :
		void setdata() {
			cout << "Enter Value  of A : ";
			cin  >> a;
		}
		void getdata() {
			cout << "A : " << a << endl;
		}
		pre operator++(pre) {
			pre p;
			p.a = ++a;
			cout << p.a;
			
		}
};

int main() {
	pre p1,p2;
	
	p1.setdata();
	
	p2 = ++p1;
	
}
