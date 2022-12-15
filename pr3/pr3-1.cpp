#include<iostream>
using namespace std;

class distans {
	
	private :
		int i1,i2,f1,f2,f,i;
		
	public :
		
		void getdata() {
			
			cout << "Enter Inch 1 : ";
			cin  >> i1;
			cout << "Enter Inch 2 : ";
			cin  >> i2;
			
			cout << "Enter Feet 1 : ";
			cin  >> f1;
			cout << "Enter Feet 2 : ";
			cin  >> f2;
			
		}
		
		void putdata() {
			
			f = f1 + f2;
			i = i1 + i2;
			
			while(i>=12) {
				i = i-12;
				f = f+1;
			}
			
			cout << "Inch : " << i << endl
			 	 << "Feet : " << f << endl;
			
		}
	
};

int main() {
	
	distans d;
	
	d.getdata();
	d.putdata();
	
}
