#include<iostream>
using namespace std;

class student {
	
	private :
		int id,age;
		string name,course,email,city,college;
	
	public :
		
		void setdata(int i) {
			system("cls");
			cout << "student : " << i << "/5" << endl;
			
			cout << "Enter Student ID : ";
			cin  >> id;
			cout << "Enter Student Name : ";
			cin  >> name;
			cout << "Enter Student age : ";
			cin  >> age;
			cout << "Enter Student course : ";
			cin  >> course;
			cout << "Enter Student email : ";
			cin  >> email;
			cout << "Enter Student city : ";
			cin  >> city;
			cout << "Enter Student collage : ";
			cin  >> college;
		}
		
		void getdata() {
			
			cout << id << "\t" << name << "\t" << age << "\t" << course << "\t" << city << "\t" << college << "\t" << email << endl;
		}
		
		static void header() {
			system("cls");
			cout << "Id\tName\tAge\tCourse\tCity\tCollege\temail\n=========================================================================" << endl; 
		}
	
};

int main() {
	
	student s[5];
	
	for(int i=0; i<5; i++) s[i].setdata(i+1);
	
	student::header();
	
	for(int i=0; i<5; i++) s[i].getdata();
	
}
