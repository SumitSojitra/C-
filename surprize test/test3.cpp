#include<iostream>
using namespace std;

class stud{
	protected :
		int id,fees;
		string name;
		static int total;
	public :
		
		void setdata(int i) {
			system("cls");
			cout << "Student " << i << "/3" << endl;
 			cout << "Enter student ID   : ";
			cin  >> id;
			cout << "Enter student Name : ";
			cin  >> name;
			cout << "Enter student Fees : ";
			cin  >> fees;
			
			total = total+fees;
		}
		
		void head() {
			system("cls");
			cout << "ID\tName\tFees\n======= ======= =======\n";
		}
		
		void getdata() {
			cout << id << "\t" << name << "\t"  << fees << endl;
		}
		void Total() {
			cout << endl << "Total fees : " << total;
		}
};

int stud::total = 0;

int main() {
	stud s1[3];
	stud s;
	
	for(int i=0; i<3; i++){
		s1[i].setdata(i+1);
	}
	
	s.head();
	for(int i=0; i<3; i++){
		s1[i].getdata();
	}
	s.Total();
}
