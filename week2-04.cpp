#include<iostream>
using namespace std;
int main(){
	int numbers;
	cout<<"enter total numbers you want to check"<<endl;
	cin>>numbers;
	while(numbers--){
		char n;
		cout<<"Enter one character ";
		cin>>n;
		
		if(n>=65 && n<=90)
		cout<<"Capital character"<<endl;
		
		if(n>=97 && n<=122)
		cout<<"Lowercase character"<<endl;
		
		if(n>=48 && n<=57)
		cout<<"Digit"<<endl;
		
		if(n>=0 && n<=47 || n>=58 && n<=64 || n>=91 && n<=96 || n>=123 && n<=127)
		cout<<"Special character"<<endl;	
	}
	return 0;
}
