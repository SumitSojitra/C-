#include<iostream>
using namespace std;

class house {
	
	private : 
		int hno,hsize;
		string htype;
		
	public :
		
		void getdata(){
			
			cout << "Enter house no : ";
			cin  >> hno;
			cout << "Enter house size : ";
			cin  >> hsize;
			cout << "Enter house type : ";
			cin  >> htype;
			
		}
		
		void putdata() {
			
			cout << "house no   : " << hno << endl 
				 << "house size : " << hsize << endl
				 << "house type : " << htype << endl;
		}
	
}; 

int main() {
	
	house h;
	
	h.getdata();
	h.putdata();
	
}
