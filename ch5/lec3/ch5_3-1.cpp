#include<iostream>
using namespace std;

class time2;

class time {
	
	private :
		int h,m,s;
		
	public :
		
		void setdata() {
			cout << "Enter Hour 1   : ";
			cin  >> h;
			cout << "Enter Minit 1  : ";
			cin  >> m;
			cout << "Enter Second 1 : ";
			cin  >> s;
			
			cout << "==========================================\n\n";
		}
		
		friend void timesum(time,time2);
	
};

class time2 {
	
	private :
		int h2,m2,s2;
		
	public :
		
		void setdata2() {
			cout << "Enter Hour 2   : ";
			cin  >> h2;
			cout << "Enter Minit 2  : ";
			cin  >> m2;
			cout << "Enter Second 2 : ";
			cin  >> s2;
			
			cout << "==========================================\n\n";
		}
		
		friend void timesum(time,time2);
	
};

void timesum(time t1,time2 t2) {
	
	int s,m,h;
		
			s = t1.s+t2.s2;
			m = t1.m+t2.m2;
			h = t1.h+t2.h2;
			
			while(s>=60) {
				s = s - 60;
				m++;
			}
			
			while(m>=60) {
				m = m - 60;
				h++;
			}
	
	cout << h << ":" << m << ":" << s << endl;
	
}

int main() {
	
	time t1;
	time2 t2;
	
	t1.setdata();
	t2.setdata2();
	
	timesum(t1,t2);
}
