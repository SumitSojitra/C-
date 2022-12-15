#include<iostream>
using namespace std;

class student {
	
	private :
		int id;
		string name;
		
	public :
	
		void getdata() {
			cout << "Enter id : ";
			cin  >> id;
			cout << "Enter name : ";
			cin  >> name; 
		}
		
		void putdata() {
			
			cout << "ID   : " << id << endl
				 << "NAME : " << name << endl;
			
		}
	
};

int main() {
	
	student s;
	
	s.getdata();
	s.putdata();
	
}
