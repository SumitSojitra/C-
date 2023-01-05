#include<iostream> 
using namespace std;

class maths{
	protected :
		int c,r,R,l,w,T,b,h;
		
		virtual void calculate(int n,char a,double e) = 0;
		
		double circle(int r) {
			c = 3.14 * r * r;
			return c;
		}
		double rectengle(int l,int w) {
			R = l*w;
			return R;
		}
		double triangle(int b,int h) {
			T =  b * h * 0.5;
			return T;
		}
};
class child : public maths{
	public :
		int choice;
		
		void calculate(int n,char a,double e) {
			cout << "Calculation for..." << endl;
	
		
			cout << "Press 1 for area of circle" << endl
				 << "Press 2 for area of rectengle" << endl
				 << "Press 3 for area of triangle" << endl;
			cout << "Enter Your Choice : ";
			cin  >> choice;
			switch(choice) {
				
				case 1 :
						cout << "Enter r : ";
						cin  >> r;
						
						circle(r);
						
						cout << "Area of circle is : " << c << endl;
						break;
				case 2 :
						cout << "Enter l : ";
						cin  >> l;
						cout << "Enter b : ";
						cin  >> b;
						
						rectengle(l,b);
						
						cout << endl << "Area of rectengle is : " << R << endl;
						break;
				case 3 :
						cout << "Enter b : ";
						cin  >> b;
						cout << "Enter h : ";
						cin  >> h;
						
						triangle(b,h);
						
						cout << endl << "Area of Triangle is : " << T << endl;
						break;
			}
		}
		
};

int main() {
	child c;
	
	c.calculate(101,'z',3.14);
}
