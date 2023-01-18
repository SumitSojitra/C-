#include<iostream>
using namespace std;

class Message{
    private :
   		string name;

    public :

    	Message(){
        	cout << "enter the your name : ";
        	cin  >> name;
    	}

	    void print(int x,int y){
	        cout << endl << "addition is : " << x + y << endl << endl;
	    } 
	
	    void print(){
	        cout << name << endl;
	    }
};

int main(){
    Message m1;
    
    int a,b;

    cout << "enter the value of a : ";
    cin  >> a;
    cout << "enter the value of b : ";
    cin  >> b;

    m1.print(a,b);
    m1.print();
}
