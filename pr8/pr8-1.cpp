#include <iostream>
using namespace std;

class Garage{
	public:
	  Garage() {
		    try {	
		    }
			catch (string e) {
		      throw e ;
		    }
		}	
};

class Motor : public Garage {
	string msg = "Car that is having troubles with its Motor. ";
	public:
	 	Motor() {
	    	throw  msg;
	    	Garage();
	  }
};


int main() {
	try{
		Motor a;
	} 
	catch (string e) {
		cout << "Engine failure " << e << endl;
	}
	
}
