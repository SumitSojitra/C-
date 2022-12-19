#include<iostream>
using namespace std;

ostream &t (ostream & output) {
	return output << "\t";
}

class hotel{
	
	private :
		int id,rating,staff_Quantity,room_Quantity;	
		string name,type,location;
		static int establish_year;
		
		public :
			
			setdata(int i,int n) {
				
				system("cls;");
				cout << "hotel of " << i << "/" << n << endl;
				cout << "Enter hotel id :";
				cin  >> id;
				cout << "Enter hotel name :";
				cin  >> name;
				cout << "Enter hotel type :";
				cin  >> type;
				cout << "Enter hotel rating :";
				cin  >> rating;
				cout << "Enter hotel location :";
				cin  >> location;
				cout << "Enter hotel staff Quantity :";
				cin  >> staff_Quantity;
				cout << "Enter hotel room Quantity :";
				cin  >> room_Quantity;
			}
			
			static void header() {
				cout << "ID\tname\ttype\trating\tstaff_q\troom_q\n======= ======= ======= ======= ======= =======\n";
			}
			
			void getdata() {
				cout << id << t << name << t << type << t << rating << t << staff_Quantity << t << room_Quantity << endl;
			}
			
			static void stat() {
				system("cls");
				cout << "All the hotel establish in year : " << establish_year << endl << "=========================================\n";
			}
			
};

int hotel::establish_year=2004;

int main() {
	
	int n;
	
	cout << "Enter hotel number : ";
	cin  >> n;
	
	hotel h[n];
	
	for(int i=0; i<n; i++) h[i].setdata(i+1,n);
	
	hotel::stat();
	hotel::header();
	
	for(int i=0; i<n; i++) h[i].getdata();
	
}
