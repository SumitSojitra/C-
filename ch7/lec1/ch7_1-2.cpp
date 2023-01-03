#include<iostream>
using namespace std;

class Cricket{
	protected :
		int n;
		
	public :
		
		void getTotalOversC(){
			cout << "Enter match over : ";
			cin  >> n;
			
			cout << "Gully Cricket total Over is " << n << ".." << endl;
		}
};
class T20 : public Cricket{
	public :
		void getTotalOversT(){
			cout << endl << "T20 Cricket Match total Over is 20..." << endl;
		}
		
};
class Test : public Cricket{
	public :
		void getTotalOvers(){
			cout << endl << "Test Cricket Match total Over is 90..." << endl;
		}
		
};

int main() {
	T20 t1;
	Test T1;
	
	t1.getTotalOversC();
	t1.getTotalOversT();
	T1.getTotalOvers();
}
