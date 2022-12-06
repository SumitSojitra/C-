#include<iostream>
#include<string.h>
using namespace std;

int main(){
	
	char a[100];
	int n,i;
	
	cout << "Enter string : ";
	cin >> a;
	
	n=strlen(a);
	
	for(i=0; i<n; i++){
		if(a[i]>='0' && a[i]<='9'){
			cout << "String is numerical" << endl;
		}else{
			cout << "String is not numerical" << endl;
		}
		
	}
	
}
