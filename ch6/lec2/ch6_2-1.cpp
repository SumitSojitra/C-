#include<iostream>
using namespace std;

class RBI {
	protected :
		int rate;
		
	public :
		
		void setdata() {
			
			cout << "=====================================\n";
			cout << endl << "Enter RBI rate of interest : ";
			cin  >> rate;
			cout << "=====================================\n";
		}
};

class SBI : public RBI {
	int amt;
	int inv;
	
	public :
	
	void setdataSBI() {
		
		cout << "STATE BANK OF INDIA\n===================\n";
		cout << "Enter your Amount : ";
		cin  >> amt;
	}
	void getdataSBI() {
		inv = amt * rate / 100;
		
		cout << "Interest of your amount is : " << inv << endl;		
	}
	
};
class BOB : public RBI {
	int amt;
	int inv;
	
	public :
	
	void setdataBOB() {
		
		cout << "BANK OF BARODA\n==============\n";
		cout << "Enter your Amount : ";
		cin  >> amt;
	}
	void getdataBOB() {
		inv = amt * rate / 100;
		
		cout << "Interest of your amount is : " << inv << endl;		
	}
	
};
class ICICI : public RBI {
	int amt;
	int inv;
	
	public :
	
	void setdataICICI() {
		
		cout << "ICICI BANK\n==========\n";
		cout << "Enter your Amount : ";
		cin  >> amt;
	}
	void getdataICICI() {
		inv = amt * rate / 100;
		
		cout << "Interest of your amount : " << inv << endl;		
	}
	
};

int main() {
	SBI s;
	BOB b;
	ICICI i;
		 
	s.setdata();
	s.setdataSBI();
	s.getdataSBI();
	
	b.setdata();
	b.setdataBOB();
	b.getdataBOB();
	
	i.setdata();
	i.setdataICICI();
	i.getdataICICI();

}
