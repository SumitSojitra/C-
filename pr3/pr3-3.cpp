#include<iostream>
using namespace std;

class time {
	
	private : 
		int s=0,m=0,h=0,t=0;
		
	public :
		
		void getdata() {
			
			cout << "Enter Second : ";
			cin  >> t;
			
		}
		
		void putdata() {
			
			
			h=t/3600;
			t=t%3600;
			m=t/60;
			t=t%60;
			s=t;
			
			cout << h << " : " << m << " : " << s << endl;
			
		}
	
};

int main() {
	
	time t;
	
	t.getdata();
	t.putdata();
	
}
