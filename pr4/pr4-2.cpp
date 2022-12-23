#include<iostream>
using namespace std;


class setter{

	public :
		
		int no,std,age;
		string name,contact,address;
				
		void setData() {
			
			cout << "Enter student Roll No    : ";
			cin  >> no;
			cout << "Enter student Name       : ";
			cin  >> name;
			cout << "Enter student Standard   : ";
			cin  >> std;
			cout << "Enter student Age        : ";
			cin  >> age;
			cout << "Enter student Contact No : ";
			cin  >> contact;
			cout << "Enter student Address    : ";
			cin  >> address;
		}
		 
		 
		
};

class getter{
	
	public :
		
		void getData() {
			
			setter s;
			s.setData();
				cout << endl << "Student Roll number : " << s.no << endl
					 << "Student Name        : " << s.name <<endl
					 << "Student Standard    : " << s.std << endl
					 << "Student Age         : " << s.age << endl
					 << "Student Contact No  : " << s.contact << endl
					 << "Student Address     : " << s.address << endl;			
			}
		
};
int main() {
	
	getter g;
	
	g.getData();
	
}
