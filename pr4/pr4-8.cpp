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
				 << "Student name\t: " << name << endl << endl;
					
		}
};


int main() {
	
	student s(101,"sumit");
	student s1(102,"raj");
	student s2=s;
	
	s.getdata();
	s1.getdata();
	s2.getdata();
	
}
