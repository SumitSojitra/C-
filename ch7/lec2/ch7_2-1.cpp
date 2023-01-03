#include<iostream>
using namespace std;

class MAX{
	int a;
	
	public:
	
		void setdata(){
			cout << "Enter value of A : ";
			cin  >> a;
		}
		void getdata(){
			cout << "A : " << a << endl;
		}
		
		MAX operator>(MAX d){
			MAX tmp;
			if(a==d.a){
				tmp.a = d.a;
			}
			else if(a<d.a){
				cout << "second is big";
			}
			else{
				cout << "first is big";
			}
			return tmp;
		}
};

int main(){
	
	MAX m1,m2,m3;

	m1.setdata();
	m2.setdata();
	
	m3 = m1 > m2;

}
