#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"Enter a number :";
	cin>>num;
	int total=0;
	while(num!=0)
	{
		int rem=num%10;
		total = total + rem;
		num=num/10;
	}
	if (total<0)
		total*=-1;
	cout<<"result: "<<total<<endl;
	return 0;
}
