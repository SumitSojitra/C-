#include<iostream>
using namespace std;

class foodCafe {
	
	private :
		int n,id,rating,establish_year,staff_quantity;
		string name,type,location;
		
	public :
		
		foodCafe() {
			
			cout << "Enter number of Fast food cafe : ";
			cin  >> n;
			
			for(int i=0; i<n; i++) {
				cout << "cafe : " << i+1 << "/" << n << endl;
				cout << "Enter cafe id             : ";
				cin  >> id;
				cout << "Enter cafe name           : ";
				cin  >> name;
				cout << "Enter cafe type           : ";
				cin  >> type;
				cout << "Enter cafe rating         : ";
				cin  >> rating;
				cout << "Enter cafe location       : ";
				cin  >> location;
				cout << "Enter cafe establish year : ";
				cin  >> establish_year;
				cout << "Enter cafe staff quantity : ";
				cin  >> staff_quantity;
							
				cout << endl << "id\tname\ttype\trating\tlocat\tEyear\tStaffQ\n======= ======= ======= ======= ======= ======= =======\n";
				cout << id << "\t" << name << "\t" << type << "\t" << rating << "\t" << location << "\t" << establish_year << "\t" << staff_quantity << endl;	
			}
			
		}
		
		void getdata() {
				}
};

int main() {
	
	foodCafe f;
	f.getdata();
	
}
