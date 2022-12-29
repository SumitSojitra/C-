#include<iostream>
using namespace std;

class A{
	protected :
		int id,salary;
    	string name;
	
    public :

    void a(){
        cout << "Enter the id     : ";
        cin  >> id;

        cout << "Enter the name   : ";
        cin  >> name;

        cout << "Enter the salary : ";
        cin  >> salary;
    }
};

class B{
    public :

    string email,no;

    void b(){
        cout << "Enter the number : ";
        cin  >> no;

        cout << "Enter the email  : ";
        cin  >> email;
    }
};

class C : public A,public B
{
    public :
    void c(){
        cout << endl << endl
        	 << "id\t: " << id << endl
        	 << "name\t: " << name << endl
        	 << "salary\t: " << salary << endl
        	 << "number\t: " <<no << endl
    	 	 << "email\t: " << email << endl;
    }
};

int main(){
    C c1;
    c1.a();
    c1.b();
    c1.c();
}
