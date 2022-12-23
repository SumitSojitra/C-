#include<iostream>
using namespace std;

class student{
	
	private :
		
		int id;
		string name;
		
	public :
	
		student(int id, string name) {
			
			this->id = id;
			this->name = name;
		}		
		
		void getdata() {
			
			cout << "Student id\t: " << id << endl
				 << "Student name\t: " << name << endl;
					
		}
};


int main() {
	
	student s(101,"sumit");
	
	s.getdata();
	
}
