#include<iostream>
using namespace std;

int main(){
	
	int n;
	
	cout << "Enter array size : ";
	cin >> n;
	
	int a[n],i,j;
	
	for(i=0; i<n; i++){
		
		cout << "Enter element : ";
		cin >> a[i];
		
		for(j=0; j<=a[i]; j++){
			if(j*j==a[i]){
				cout << endl << "squre of : " << j << endl;
			}
		}
		cout << endl;
	}
	
}
