#include <bits/stdc++.h>
using namespace std;
int main(){
	bool flag=true;
    string str,word;
    cout<<"Enter a string."<<endl;
    getline(cin,str);
    cout<<"Enter other string:"<<endl;
    getline(cin,word);
    stringstream ss(str);
    int count=0;
    while(ss>>str){	
		count++;
        if(str==word){
        	flag = false;
          	break;
			}
    }
    if (flag==true)
    	cout<<"1";
    else
    	cout<<"Index of sub-string is "<<count<<endl;
    return 0;
}
