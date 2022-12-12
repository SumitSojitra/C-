#include<iostream> 
using namespace std;

class car {
	
	private :
		int id;
		string companyName;
		string color;
		string model;
		int releaseYear;
		
	public : 
		
		void getcar() {
			
			cout << "Enter Car id : ";
			cin >> id;
			cout << "Enter Car Company Name : ";
			cin >> companyName;
			cout << "Enter Car Color : ";
			cin >> color;
			cout << "Enter Car Model : ";
			cin >> model;
			cout << "Enter Car release Year : ";
			cin >> releaseYear;
			
		}
		void putcar() {
			
			cout << endl << "Car Id           : " << id << endl
				 		 << "Car Company Name : " << companyName << endl
					     << "Car Color        : " << color << endl
					     << "Car Model        : " << model << endl
					     << "Car Release Year : " << releaseYear << endl;
					
		}
	
};

int main() {
	
	car c1,c2,c3,c4;
	
	c1.getcar();
	
	c1.putcar();
}
