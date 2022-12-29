#include<iostream>
using namespace std;

class A{
   protected : 
    int a;
    
    public :
    	
    void getdata() {
    	cout << "Enter the number : ";
        cin  >> a;
	}
};

class Square : public A{
    public :

    void square(){
        cout << "Square : " << (a*a) << endl << endl;
    }
};

class Cube : public A{
    public :

    void cube(){
        cout << "Cube : " << (a*a*a) << endl;
    }
};

int main()
{
    Square s1;
    Cube c1;
    
    s1.getdata();
    s1.square();
    
    c1.getdata();
    c1.cube();
}
