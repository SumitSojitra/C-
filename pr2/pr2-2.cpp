#include<iostream>
using namespace std;

int swap(int a[],int b[],int n){
	
	int i;
	
	for(i=0; i<n; i++){

		a[i] = a[i]+b[i];
		b[i] = a[i]-b[i]; 
		a[i] = a[i]-b[i];
	}
	
}

int main() {
	
	int n;
	
	cout << "Enter n : ";
	cin >> n;
	
	int a[n],b[n],i;
	
	for(i=0; i<n; i++){
		cout << "Enter a : ";
		cin >> a[i];
	}
	for(i=0; i<n; i++){
		cout << "Enter b : ";
		cin >> b[i];
	}
	
	swap(a,b,n);
	
	for(i=0; i<n; i++){
		cout << endl << "array a : " << a[i] << endl;
	}
	for(i=0; i<n; i++){
		cout << endl << "array b : " << b[i] << endl;
	}
	
}
