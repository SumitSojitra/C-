#include<iostream>
using namespace std;

class des{
	
	private :
		
		int id;
		string name;
		
	public :
	
		~des() {
			cout << endl << "......Thank you......"; 
		}		
		
		void setdata() {
			cout << "Enter id : ";
			cin  >> id;
			cout << "Enter name : ";
			cin  >> name;
		}
		
		void getdata() {
			
			cout << "Student id\t: " << id << endl
				 << "Student name\t: " << name << endl;
					
		}
};


int main() {
	
	des s;
	
	s.setdata();
	s.getdata();
	
}
