#include<iostream>
using namespace std;

class time {
	
	private : 
		int s,m,h;
		
	public :
		
		void getdata() {
			
			cout << "Enter Second : ";
			cin  >> s;
			
		}
		
		void putdata() {
			
			while(s>=3600) {
				m = s-3600;
			}
			while(m>=60) {
				h = m-60;
			}
			s = s % 3600;
			
			cout << h << " : " << m << " : " << s << endl;
			
		}
	
};

int main() {
	
	time t;
	
	t.getdata();
	t.putdata();
	
}
