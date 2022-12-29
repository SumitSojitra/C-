#include<iostream>
using namespace std;

class Mother{
    public : 
    
    void display(){
        cout << "hello mother" << endl;
    }
};

class Daughter : public Mother{
    public : 

    void display(){
	    Mother :: display();
        cout << "hello Daughter" << endl;
    }
};

int main(){
    Daughter d1;
    d1.display();
}
