#include <bits/stdc++.h> 
using namespace std; 
int main(){
	int num1,num2;
	cout<<"Enter first number: ";
	cin>>num1;
	cout<<"Enter second number: ";
	cin>>num2;
	while (num2 != 0)  
    {
        int carry = num1 & num2; 
        num1 = num1 ^ num2;  
        num2 = carry << 1;  
    }  
    cout<<"Result: "<<num1<<endl;
    return 0;  
}  
