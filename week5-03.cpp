#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	string main_s,find_s,replace_s;
	cout<<"Enter main string:";
	getline(cin,main_s);
	cout<<"Enter string to find:";
	cin>>find_s;
	size_t pos=main_s.find(find_s);
	cout<<"Enter replacing string:";
	cin>>replace_s;
	main_s.replace(pos, find_s.length() ,replace_s);
	cout<<"Final String is:"<<main_s<<endl;	
	return 0;	
}

