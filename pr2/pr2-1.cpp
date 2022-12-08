#include<iostream>
using namespace std;

int sum(int a,int b) { 

	int s;
	
	s = a+b;
	
	return s;

}

int avg(int s) { 
	
	int average;
	average = s/2;
	
	return average;
	
}

int main() {
	
	int a,b,average;
	
	cout << "Enter A : ";
	cin >> a;
	cout << "Enter B : ";
	cin >> b;
	
	average = avg(sum(a,b));
	
	cout << "Average : " << average;
	
}
