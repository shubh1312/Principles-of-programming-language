#include<iostream>
using namespace std;
int main()
{
	int limit;
	cout<<"number of elememts in array :";
	cin>>limit;
	int a[limit];
	int element , count=0;
	cout<<"enter the element you want to check the frequency :";
	cin>>element;
	for(int i=0;i<limit;i++){
		cin>>a[i];
		if(a[i]==element)
		count++;
	}
cout<<"count of "<<element<<" is "<<count<<endl;
return 0;
}
