#include<iostream>
using namespace std;

int main(){
	
	int i,n;
	
	cout << "Enter array size : ";
	cin >> n;
	
	int a[n];
	
	for(i=0; i<n; i++){
		cout << "Enter Value : ";
		cin >> a[i];
	}	
	
	for(i=0; i<n; i++){
		if(a[i]%2==0){
			cout << a[i] ;
		}
	}
}
