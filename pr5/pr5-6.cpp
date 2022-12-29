#include<iostream>
using namespace std;

class A{
	protected :
		int id,salary,exp;
	    string name,role,compony,address,email,contact;

    public :

	    void setdataA(){
    	    cout << "Enter the id   : ";
        	cin  >> id;

       		cout << "Enter the name : ";
        	cin  >> name;

        	cout << "Enter the role : ";
        	cin  >> role;
    	}
};

class B : public A{
    public :
    	
	    void setdataB(){
	        cout << "Enter the salary    : ";
	        cin  >> salary;
	
	        cout << "Enter the expriance : ";
	        cin  >> exp;
	    }
};

class C : public B{
    public :
    	
	    void setdataC(){
	        cout << "Enter the compony name : ";
	        cin  >> compony;
	
	        cout << "Enter the address      : ";
	        cin  >> address;
	    }
	
	    void getdataC(){
	    	cout << "=======================\n";
	        cout << "Name is   : " << name << endl
	        	 << "Role is   : " << role << endl
	        	 << "salary is : " << salary << endl;
	    }
};

class D : public C{
    public :
    	
	    void setdataD(){
	    	cout << "=======================\n";
	        cout << "Enter the email   : ";
	        cin  >> email;
	
	        cout << "Enter the contact : ";
	        cin  >> contact;
	    }
	
	    void getdataD(){
	        cout << endl << endl
	        	 << "id         : " << id << endl
	         	 << "name       : " << name << endl
	             << "role       : " << role << endl
	        	 << "salary     : " << salary << endl
	        	 << "experience : " << exp << endl
	        	 << "comp name  : " << compony << endl
	        	 << "address    : " << address << endl
	        	 << "email      : " << email << endl
	        	 << "contact    : " << contact << endl;
	    }
};

int main(){
    D d1;
    d1.setdataA();
    d1.setdataB();
    d1.setdataC();
    d1.getdataC();
    d1.setdataD();
    d1.getdataD();
}
