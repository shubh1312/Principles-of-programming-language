#include<iostream>
#include<cstring>
using namespace std;
int main(){
	int t;
	cout<<"enter number of strings you have :";
	cin>>t;
	while(t--){
	    char string_1[20];
	    bool flag=true;
	    int length;
	    cout << "Enter a string: "; 
		cin >> string_1;
	    length = strlen(string_1);
	    for(int i=0;i<length;i++){
	    	if(string_1[i] != string_1[length-i-1]){
	            flag = false;
	            cout << string_1 <<" is not a palindrome"<< endl;
	            break;
			}
		}
	    if (flag)
	    	cout << string_1 <<" is a palindrome"<< endl;
	}
	return 0;
}
