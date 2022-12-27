#include<iostream>
using namespace std;

class p{
	protected :
		float temp;
		
	public :
		
		void sedata() {
			
			cout << "Enter temperature : ";
			cin  >> temp;	
		}
			
};

class q : public p{
	protected :
		float fahrenheit;
	public :
		
		void toFehrenheit(){
			
			fahrenheit = (temp*9/5) + 32;
			
			cout << endl << "fehrenheit : " << fahrenheit << endl;
			
		}
};

class r : public q{
	protected :
		float kelvin;
	public :
		
		void tokelvin() {
			
			kelvin = 273.5 + ((fahrenheit-32.0) * (5.0/9.0));
			
			cout << endl << "Kelvin : " << kelvin << endl;
		}
};

int main() {
	r r1;
	
	r1.sedata();
	r1.toFehrenheit();
	r1.tokelvin();
}
