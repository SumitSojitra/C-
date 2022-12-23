#include<iostream>
using namespace std;

class india{
	
    public :

    static string capital;
	
	void cap() {
		cout << "Capital of india is : " << capital << "\n=====================================================\nStates of india\n============================\n" << endl;
	}
	
     void states()
    {
        cout<<"Andhra pradesh"<<endl;
        cout<<"Arunachal pradesh"<<endl;
        cout<<"Assam"<<endl;
        cout<<"Bihar"<<endl;
        cout<<"Chhattisgarh"<<endl;
        cout<<"Goa"<<endl;
        cout<<"Gujarat"<<endl;
        cout<<"Himachal Pradesh"<<endl;
        cout<<"Jharkhand"<<endl;
        cout<<"Karnataka"<<endl;
        cout<<"Madhya Pradesh"<<endl;
        cout<<"Maharashtra"<<endl;
        cout<<"Manipur"<<endl;
        cout<<"Meghalaya"<<endl;
        cout<<"Mizoram"<<endl;
    }
};

string india :: capital="Delhi";

int main()
{
    india i;
    i.cap();
    i.states();
}
