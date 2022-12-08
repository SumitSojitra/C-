#include<iostream>
using namespace std;

int add(int a,int b) {
	return a+b;
}
int sub(int a,int b) {
	return a-b;
}
int multi(int a,int b) {
	return a*b;
}
float div(int a,int b) {
	return a/b;
}

float mod(int a,int b) {
	return a%b;
}

int main() {
	
	int a,b,choice,ans;
		
	
		
	do{	
	
   		cout << "Press 1 for Addition..." << endl
			 << "Press 2 for Substraction..." << endl
			 << "Press 3 for Multiplication..." << endl
			 << "Press 4 for Division..." << endl
			 << "Press 5 for Modulas..." << endl;
		
		cout << endl << "--------------------------------" << endl << "Enter your choice : ";
		cin >> choice;
		
		switch(choice){
				
				case 1 : 
						cout << "Enter A : ";
						cin >> a;
						cout << "Enter B : ";
						cin >> b;
						
						ans = add(a,b);
						cout << endl << "Addition : " << ans << endl << "--------------------------------" << endl;
						break;
				
				case 2 : 
						cout << "Enter A : ";
						cin >> a;
						cout << "Enter B : ";
						cin >> b;
						
						ans = sub(a,b);
						cout << endl << "Substraction : " << ans << endl << "--------------------------------" << endl;
						break;
						
				case 3 : 
						cout << "Enter A : ";
						cin >> a;
						cout << "Enter B : ";
						cin >> b;
						
						ans = multi(a,b);
						cout << endl << "Multiplication : " << ans << endl << "--------------------------------" << endl;
						break;
						
				case 4 : 
						cout << "Enter A : ";
						cin >> a;
						cout << "Enter B : ";
						cin >> b;
						
						ans = div(a,b);
						cout << endl << "Division : " << ans << endl << "--------------------------------" << endl;
						break;
						
				case 5 : 
						cout << "Enter A : ";
						cin >> a;
						cout << "Enter B : ";
						cin >> b;
						
						ans = mod(a,b);
						cout << endl << "Modulas : " << ans << endl << "--------------------------------" << endl;
						break;
			
		}
		
	}while(choice!=0);
	
}
