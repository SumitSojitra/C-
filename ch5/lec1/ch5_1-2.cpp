#include<iostream>
using namespace std;

class Customer {
	
	private :
		int id,age;
		string name,brand,mobileNo,city,vali;
	
	public :
		
		void setdata(int i) {
			system("cls");
			cout << "customer : " << i << "/5" << endl;
			
			cout << "Enter Customer ID : ";
			cin  >> id;
			cout << "Enter Customer Name : ";
			cin  >> name;
			cout << "Enter Customer age : ";
			cin  >> age;
			cout << "Enter Customer telecom brand name : ";
			cin  >> brand;
			cout << "Enter Customer mobile number : ";
			cin  >> mobileNo;
			cout << "Enter Customer city : ";
			cin  >> city;
			cout << "Enter Customer simcard validity : ";
			cin  >> vali;
		}
		
		void getdata() {
			
			cout << id << "\t" << name << "\t" << age << "\t" << brand << "\t" << city << "\t" << vali << "\t\t" << mobileNo << endl;
		}
		
		static void header() {
			system("cls");
			cout << "Id\tName\tAge\tbName\tCity\tValiditi\tmobileNumber\n=========================================================================" << endl; 
		}
	
};

int main() {
	
	Customer s[5];
	
	for(int i=0; i<5; i++) s[i].setdata(i+1);
	
	Customer::header();
	
	for(int i=0; i<5; i++) s[i].getdata();
	
}
