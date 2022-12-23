#include<iostream>
using namespace std;

class hotel{
	
	private :
		int id,staff,room,year; 
		string name,type,address,rate,website;
	
	public :
		
		void setdata(int id,string name, string type, int staff, int room, int year, string address, string rate, string website) {
			
			this->id = id;
			this->name = name;
			this->type = type;
			this->staff = staff;
			this->room = room;
			this->year = year;
			this->address = address;
			this->rate = rate;
			this->website = website;
		}
		
		void getdata() {
			
			cout << "Hotel id             : " << id << endl
				 << "Hotel name           : " << name << endl
				 << "Hotel type           : " << type << endl
				 << "Hotel staff size     : " << staff << endl
				 << "Hotel room size      : " << room << endl
				 << "Hotel establish year : " << year << endl
				 << "Hotel address        : " << address << endl
				 << "Hotel rating         : " << rate << endl
				 << "Hotel website        : " << website << endl;
		}
		
};

int main() {
	
	hotel h;
	
	h.setdata(101, "surabhi", "motel", 30, 20, 2004, "surat", "5 star", "surabhi@gmail.com");
	h.getdata();
}
