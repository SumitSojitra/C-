#include<iostream>
using namespace std;
		
class dpc{
	
	private :
		
		int id;
		string name;
		
	public :
		
		dpc() {
		
			cout << "WELCOME\n===================\n" << endl;
		}

		dpc(int id, string name) {
			this->id=id;
			this->name=name;
		}		
		
		void getdata() {
			cout << "Student id : " << id << endl
				 << "Student name : " << name << endl << endl;
		}
};

int main() {
	
	dpc d;
	dpc p(101,"raj");
	dpc p1(202,"keval");
	dpc c(p);
	
	p.getdata();
	p1.getdata();
	c.getdata();
	
}
