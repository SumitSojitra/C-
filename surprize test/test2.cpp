#include<iostream>
using namespace std;

class subject{
	protected :
		char grade;
		string s1,s2,s3,s4,s5;
		int m1,m2,m3,m4,m5,sum=0;
		double per;
	public :
		
		subject() {
			cout << "Enter subject 1 name : ";
			cin  >> s1;
			cout << "Enter subject 2 name : ";
			cin  >> s2;
			cout << "Enter subject 3 name : ";
			cin  >> s3;
			cout << "Enter subject 4 name : ";
			cin  >> s4;
			cout << "Enter subject 5 name : ";
			cin  >> s5;
		}
		
		void setdata() {
			cout << "=============================\n";
			cout << "Enter subject 1 marks : ";
			cin  >> m1;
			cout << "Enter subject 2 marks : ";
			cin  >> m2;
			cout << "Enter subject 3 marks : ";
			cin  >> m3;
			cout << "Enter subject 4 marks : ";
			cin  >> m4;
			cout << "Enter subject 5 marks : ";
			cin  >> m5;
		}
		
		void proceedMarks() {
			sum = m1+m2+m3+m4+m5;
			per = (sum*100)/500;
			
			if(per<90 || per>=100) {
				grade = 'A';
			}
			else if(per<80 || per>=90) {
				grade = 'B';
			}
			else if(per<70 || per>=80) {
				grade = 'C';
			}
			else if(per<60 || per>=70) {
				grade = 'D';
			}
			else if(per<50 || per>=60) {
				grade = 'E';
			}
			else if(per<33 || per>=50) {
				grade = 'F';
			}
			else {
				grade = 'FAIL..';
			}
		}
		
		~subject() {
			cout << "================================\n";
			cout << s1 << "\t" << m1 << "\t" << endl
				 << s2 << "\t" << m2 << "\t" << endl
				 << s3 << "\t" << m3 << "\t" << endl
				 << s4 << "\t" << m4 << "\t" << endl
				 << s5 << "\t" << m5 << "\t" << endl
				 << "Total marks : " << sum << endl
				 << "Percentage  : " << per << endl
				 << "Grade       : " << grade << endl;
		}
};

int main() {
	subject s;
	
	s.setdata();
	s.proceedMarks();
	
}
