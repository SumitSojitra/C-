#include<iostream>
using namespace std;

inline int fact(int a){
	
	if(a<=1){
		return 1;
	}else {
		return a*fact(a-1);
	}
	
}

int main() {
	
	int n;
	
	cout << "Enter array size : ";
	cin >> n;
	
	int a[n],i,f;
	
	for(i=0; i<n; i++) {
	
		cout << "Enter element : ";
		cin >> a[i];
		
	}
	
	for(i=0; i<n; i++){

	f=fact(a[i]);	

	cout << "factorial : " << f << endl;
	
	}
}
