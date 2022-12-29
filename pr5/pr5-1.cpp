#include<iostream>
using namespace std;

class Shape{
	protected :
		int height,width;
		
	public :
		Shape() {
        	cout << "Enter Value of Width and Height : ";
      	  	cin >> width >> height;
		}
};

class Triangle : public Shape{
    public : 

    int area(){
        return 0.5 * width * height;
    }
};

class Rectangle : public Shape{
    public : 

    int area(){
        return width * height;
    }
};

int main()
{
    Triangle t1;
    Rectangle r1;

    int triangle , rectangle;

    triangle = t1.area();
    cout << endl << "Area of Triangle  : " << triangle << endl;

    rectangle = r1.area();
    cout << endl << "Area of Rectangle : " << rectangle << endl;
}
