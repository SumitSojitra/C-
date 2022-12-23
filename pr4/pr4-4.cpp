#include<iostream> 
using namespace std;

class school{
	
	private :
		int id,rollNo,std,age;
		string name,address,contact;
		static string instituteName;
	
	public :
		
		void setdata() {
			
			cout << endl << "school student detail :\n======================================================\n";
			cout << "Enter student id\t\t:";
			cin  >> id;
			cout << "Enter student name\t\t:";
			cin  >> name;
			cout << "Enter student roll no\t\t:";
			cin  >> rollNo;
			cout << "Enter student standard\t\t:";
			cin  >> std;
			cout << "Enter student age\t\t:";
			cin  >> age;
			cout << "Enter student contact no\t:";
			cin  >> contact;
			cout << "Enter student address\t\t:";
			cin  >> address;
			
		}
		
		void getdata() {
			
			cout << endl << "======================================================\n";
			cout << "Student id\t\t:" << id << endl
				 << "Student name\t\t:" << name << endl
				 << "Student roll no\t\t:" << rollNo << endl
				 << "Student standard\t:" << std << endl
				 << "Student age\t\t:" << age << endl
				 << "Student contact no\t:" << contact << endl
				 << "Student address\t\t:" << address << endl
				 << "Student institute name\t:" << instituteName << endl;
			
		}
		
};

class college{
	
	private :
		int id,rollNo,age;
		string name,address,std,contact;
		static string instituteName;
	
	public :
		
		void setdata() {
			
			cout << endl << "college student detail :\n======================================================\n"; 
			cout << "Enter student id\t\t:";
			cin  >> id;
			cout << "Enter student name\t\t:";
			cin  >> name;
			cout << "Enter student roll no\t\t:";
			cin  >> rollNo;
			cout << "Enter student standard\t\t:";
			cin  >> std;
			cout << "Enter student age\t\t:";
			cin  >> age;
			cout << "Enter student contact no\t:";
			cin  >> contact;
			cout << "Enter student address\t\t:";
			cin  >> address;
			
		}
		
		void getdata() {
			
			cout << endl << "======================================================\n";
			cout << "Student id\t\t:" << id << endl
				 << "Student name\t\t:" << name << endl
				 << "Student roll no\t\t:" << rollNo << endl
				 << "Student standard\t:" << std << endl
				 << "Student age\t\t:" << age << endl
				 << "Student contact no\t:" << contact << endl
				 << "Student address\t\t:" << address << endl
				 << "Student institute name\t:" << instituteName << endl;
			
		}
		
};

string school :: instituteName = "Ashadeep";
string college:: instituteName = "Bhagwan Mahavir Univercity";

int main() {
	
	school s;
	college c;
	
	s.setdata();
	s.getdata();
	
	c.setdata();
	c.getdata();
	
}
