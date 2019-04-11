#include <bits/stdc++.h>
using namespace std;
int main(){
    string str,word;
    cout<<"Enter a string."<<endl;
    getline(cin,str);
    cout<<"enter a word:";
    getline(cin,word);
    stringstream ss(str);
    int count=0;
    while(ss>>str)
    {
        if(str==word)
          count++;
    }
    cout<<word<<" occurs "<<count<<" times."<<endl;
return 0;
}
