#include<iostream>
using namespace std;

class comp{
	private :
		int id,staff_q,revenue,IRDiamond,EDiamonds;
		string name,ceo;
		
	public :
		
		comp(int id,int staff_q,int revenue,int IRDiamond,int EDiamond,string name,string ceo) {
			cout << endl << "ID\tName\tCEO\tStaffQ\tRevenue\tI_R_D\tEDiamond\n=======================================================\n";
			cout << id << "\t" << name << "\t" << ceo << "\t" << staff_q << "\t" << revenue << "\t" << IRDiamond << "\t" << EDiamond << endl;
		}
};

int main() {
	
	int n,id,staff_q,revenue,IRDiamond,EDiamond;
	string name,ceo;
	
	cout << "Enter nuber of companies : ";
	cin  >> n;
	
	for(int i=0; i<n; i++) {
		cout << endl << "company : " << i+1 << "/" << n << endl;
		cout << "Enter company id                : ";
		cin  >> id;
		cout << "Enter company name              : ";
		cin  >> name;
		cout << "Enter company CEO name          : ";
		cin  >> ceo;
		cout << "Enter company staff Quantity    : ";
		cin  >> staff_q;
		cout << "Enter company revenue(per year) : ";
		cin  >> revenue;
		cout << "Enter Import raw diamond(per year) : ";
		cin  >> IRDiamond;
		cout << "Enter Export diamond (per year) : ";
		cin  >> EDiamond;
		
		comp c(id,staff_q,revenue,IRDiamond,EDiamond,name,ceo);
	}
	
}
