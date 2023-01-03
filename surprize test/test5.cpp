#include<iostream>
using namespace std;

class movie{
	protected :
		int choice,t,n;
	
	public :
		
	movie() {
		cout << endl << "\t....Welcome To User....\n=======================================================\n" << endl;
	}
	
	void setdata() {
		cout << "Press 1 for English" << endl
			 << "Press 2 for Hindi" << endl
			 << "Press 3 for gujarati" << endl;
		cout << "Enter Your Language : ";
		cin  >> choice;
		
		switch(choice) {
			case 1 : system("cls");
					 cout << "Press 1 for AVATAR" << endl
						  << "Press 2 for DRISHYAM 2" << endl
						  << "Press 3 of CIRKUS" << endl;
					cout << "Enter your movie you want watch : ";
					cin  >> n;
					
					switch(n) {
						case 1 : system("cls");
								 cout << "Enter number of AVATAR movie tickets you want to buy : ";
								 cin  >> t; 
								 
								 cout << endl << endl << "Congratulations....Your Tickets Purchased Successfully ";
								 break;
						
						case 2 : system("cls");
								 cout << "Enter number of DRUSHYAM 2 movie tickets you want to buy : ";
								 cin  >> t; 
								 
								 cout << endl << endl << "Congratulations....Your Tickets Purchased Successfully ";
								 break;
						
						case 3 : system("cls");
								 cout << "Enter number of CIRKUS movie tickets you want to buy : ";
								 cin  >> t; 
								 
								 cout << endl << endl << "Congratulations....Your Tickets Purchased Successfully ";
								 break;
								  
					}
					break;
			
			case 2 : system("cls");
				     cout << "Press 1 for AVATAR" << endl
						  << "Press 2 for DRISHYAM 2" << endl
						  << "Press 3 of CIRKUS" << endl;
					cout << "Enter your movie you want watch : ";
					cin  >> n;
					switch(n) {
						case 1 : system("cls");
								 cout << "Enter number of AVATAR movie tickets you want to buy : ";
								 cin  >> t; 
								 
								 cout << endl << endl << "Congratulations....Your Tickets Purchased Successfully ";
								 break;
						
						case 2 : system("cls");
								 cout << "Enter number of DRUSHYAM 2 movie tickets you want to buy : ";
								 cin  >> t; 
								 
								 cout << endl << endl << "Congratulations....Your Tickets Purchased Successfully ";
								 break;
						
						case 3 : system("cls");
								 cout << "Enter number of CIRKUS movie tickets you want to buy : ";
								 cin  >> t; 
								 
								 cout << endl << endl << "Congratulations....Your Tickets Purchased Successfully ";
								 break;
								  
					}
					break;
			
			case 3 : system("cls");
					 cout << "Press 1 for AVATAR" << endl
						  << "Press 2 for DRISHYAM 2" << endl
						  << "Press 3 of CIRKUS" << endl;
					cout << "Enter your movie you want watch : ";
					cin  >> n;
					switch(n) {
						case 1 : system("cls");
								 cout << "Enter number of AVATAR movie tickets you want to buy : ";
								 cin  >> t; 
								 
								 cout << endl << endl << "Congratulations....Your Tickets Purchased Successfully ";
								 break;
						
						case 2 : system("cls");
								 cout << "Enter number of DRUSHYAM 2 movie tickets you want to buy : ";
								 cin  >> t; 
								 
								 cout << endl << endl << "Congratulations....Your Tickets Purchased Successfully ";
								 break;
						
						case 3 : system("cls");
								 cout << "Enter number of CIRKUS movie tickets you want to buy : ";
								 cin  >> t; 
								 
								 cout << endl << endl << "Congratulations....Your Tickets Purchased Successfully ";
								 break;
								  
					}
					break;
		}
	}
	
	void getdata() {
		cout << endl << "=================================================================\nThank You for using our System :)";
	}
};

int main() {
	movie m1;
	
	m1.setdata();
}
