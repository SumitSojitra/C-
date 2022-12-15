#include<iostream>
using namespace std;

class time {
	
	private : 
	
		int s1,m1,h1,s,m,h;
		int s2,m2,h2;
		
	public : 
		
		void getdata() {
			
			cout << "Enter Second 1 : ";
			cin  >> s1;
			cout << "Enter minit 1  : ";
			cin  >> m1;
			cout << "Enter hour 1   : ";
			cin  >> h1;
			
			
			cout << "Enter Second 2 : ";
			cin  >> s2;
			cout << "Enter minit 2  : ";
			cin  >> m2;
			cout << "Enter hour 2   : ";
			cin  >> h2;
			
		}
		
		void putdata() {
			
			s = s1+s2;
			m = m1+m2;
			h = h1+h2;
			
			while(s>=60) {
				s = s - 60;
				m++;
			}
			
			while(m>=60) {
				m = m - 60;
				h++;
			}
			
			cout << "Second : " << s << endl
				 << "Minit  : " << m << endl
				 << "Hour   : " << h << endl;
 			
		}
	
};

int main() {
	
	time t;
	
	t.getdata();
	t.putdata();
	
}
