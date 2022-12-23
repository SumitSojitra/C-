#include <iostream>
using namespace std;

class railway{
	
	private :
		
    	int number;
    	string Name,source,location,time;
	
	public:
		
		void start() {
			cout << "Ente train detail ad below\n==========================================\n";
		}
	
	    void setdata(int i)
    	{
        	cout << "train : " << i << "/3" << endl;
        	cout << "Enter train Number       : ";
        	cin  >> number;
	        cout << "Enter train Name         : ";
	        cin  >> Name;
	        cout << "Enter train Source       : ";
	        cin  >> source;
	        cout << "Enter train Destination  : ";
	        cin  >> location;
	        cout << "Enter train Time         : ";
	        cin  >> time;
	        
	        cout << "====================================================================================================" << endl << endl;
	    }

    void getdata(int a, string name)
    {
        if(a == number)
        {
            cout << endl << endl << "Booking Successfull \n================================================" << endl;
            cout << "Name                  : " << name << endl 
                 << "TRAINS NUMBER IS      : " << number  << endl
                 << "TRAINS NAME IS        : " << Name << endl
                 << "TRAINS SOURCE IS      : " << source << endl
                 << "TRAINS DESTINATION IS : " << location << endl
                 << "TRINS TIME IS         : " << time << endl << endl;
        }
       
    }
};

int main()
{

    railway r[3];
    r[0].start();
    
    for(int i=0; i<3; i++)
    {
        r[i].setdata(i+1);
    }

    int a;
    string name;

    cout << "Enter train number you want to travel : ";
    cin  >> a;
    cout << "Enter The Your Name : ";
    cin  >> name;
    
    for(int i=0; i<3; i++)
    {
        r[i].getdata(a,name);
    }
    
}

