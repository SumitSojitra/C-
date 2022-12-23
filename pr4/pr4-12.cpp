#include<iostream>
using namespace std;

ostream &t (ostream & output) {
	return output << "\t";

}
class Student {
	
	private :
		
		int id,age;
		string name,city,college;
		
		
	public :
		
		void setdata(int i,int n){
			
			system("cls");
			cout << "Student : " << i << "/" << n << endl;
			cout << "Enter Student Id\t: ";
			cin  >> id;
			cout << "Enter Student Name\t: ";
			cin  >> name;
			cout << "Enter Student Age\t: ";
			cin  >> age;
			cout << "Enter Student City\t: ";
			cin  >> city;
			cout << "Enter Student College\t: ";
			cin  >> college;
			
        }
        
        void header() {
        	system("cls");
        	cout << "ID\tName\tage\tcity\tCollege\n======= ======= ======= ======= =======\n";
        	
		}
		
		void getdata(){
			cout << id << t << name << t << age << t << city << t << college << endl;
			
		}
};




int main() {
	
    int n;
	
	cout << "Entre Number Of Student :";
	cin  >> n;
	
	Student s[n];
	
	for(int i=0; i<n; i++)  s[i].setdata(i+1,n);
	
	s[0].header();
	
	for(int i=0; i<n; i++)  s[i].getdata();
}
