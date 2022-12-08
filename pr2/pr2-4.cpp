#include<iostream>
using namespace std;

inline void table(int n,int i) {
	
	cout << n << " * " << i << " = " << n*i << endl;
	
}

int main() {
	
	int n,i;
	
	cout << "Enter Table : ";
	cin >> n;
	
	for(i=1; i<=10; i++) {
		
		table(n,i);
		
	}
	
}
