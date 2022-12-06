#include<iostream>
#include<string.h>
using namespace std;

int main(){
	
	char str[100];
	int len,i;
	
	cout << "Enter string : ";
	cin >> str;
	
	len = strlen(str);
	
	for(i=0; i<len; i++){
		if(str[i]>=65 && str[i]<=90){
			str[i]+=32;
		}else{
			str[i]-=32;
		}
	}
	
	cout << "toggle case : " << str;
}
