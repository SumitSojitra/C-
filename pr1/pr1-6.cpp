#include<iostream>
using namespace std;

int main(){
	
	int n;
	
	cout << "Enter Array size : ";
	cin >> n;
	
	int a[n],b[n],i;
	
	for(i=0; i<n; i++){
		cout << "Enter element : ";
		cin >> a[i];
		
		b[i]=a[i]*a[i]*a[i];
	}
	for(i=0; i<n; i++){
		cout << "cube : " << b[i] << endl;
	}
	
}
