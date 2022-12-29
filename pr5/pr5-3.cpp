#include<iostream>
using namespace std;

class animal{
	protected : 
		int age;
	    string name;
	
    public :
    	
    void setValue(){
    	cout << "===============================\n";
        cout << "Enter the animal name : ";
        cin  >> name;

        cout << "Enter the animal age  : ";
        cin  >> age;
    }
};

class Zebra : public animal
{
    public :

    string place,color;

    void getdata()
    {
        cout << "Enter the place  : ";
        cin  >> place;
        cout << "Enter the color  : ";
        cin  >> color;
        
        cout << endl << "name is  : " << name << endl
        	 << "age is   : " << age << endl
         	 << "place is : " << place << endl
         	 << "color is : " << color << endl;
    }
};

class Dolphin : public animal
{
    public :

    string place,color;

    void getdata2()
    {
        //cout << "data of Dolphin......" << endl;
        cout << "Enter the place  : ";
        cin  >> place;
        cout << "Enter the color  : ";
        cin  >> color;

        cout << endl << "name is  : " << name << endl
        	 << "age is   : " << age << endl
        	 << "place is : " << place << endl
        	 << "color is : " << color << endl;
    }
};

int main()
{
    Dolphin d1;
    Zebra z1;
    
    z1.setValue();
    z1.getdata();
    
    d1.setValue();
    d1.getdata2();
}
