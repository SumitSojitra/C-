#include<iostream>
using namespace std;

class maths{
	public :
		
		void calc(int a,int b){
			cout << "Division : " << a/b << endl;
		}
		void calc(int a,int b,int c){
			cout << "Substraction : " << a-b-c << endl;
		}
		void calc(int a,int b,int c,int d){
			cout << "Multiplication : " << a*b*c*d << endl;
		}
		void calc(int a,int b,int c,int d,int e){
			cout << "Addition : " << a+b+c+d+e << endl;
		}
};

int main() {
	maths m;
	
	m.calc(10,2);
	m.calc(5,3,4);
	m.calc(2,3,4,5);
	m.calc(1,2,3,4,5);
}
