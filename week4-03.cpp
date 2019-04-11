#include<iostream>
using namespace std;
int main()
{
	int limit;
	cout<<"enter number of elements in array:";
	cin>>limit;
	int a[limit];
	int even=0, odd=0, pos=0, neg=0;
	for(int i=0;i<limit;i++){
	cin>>a[i];
	if(a[i]>0)
	pos++;
	if(a[i]<0)
	neg++;
	if(a[i]%2==0)
	even++;
	if(a[i]%2!=0)
	odd++;
	}
	cout<<"No. of even are: "<<even<<endl;
	cout<<"No. of odd are: "<<odd<<endl;
	cout<<"No. of positive are: "<<pos<<endl;
	cout<<"No. of negative are: "<<neg<<endl;
	return 0;
}
