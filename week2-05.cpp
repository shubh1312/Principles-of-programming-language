#include<iostream>
using namespace std;
int main(){
	float cost, sell;
	cout<<"enter space seperated cost price and selling price"<<endl;
	cin>>cost>>sell;
	if(cost>sell)
	{
		cout<<"Loss in percentage is"<<100* ((cost-sell)/cost)<<" %"<<endl;
	}
	if(sell>cost)
	{
		cout<<"Profit in percentage is "<<100 * ((sell-cost)/cost)<<" %"<<endl;
	}
	else
	cout<<"No profit no loss"<<endl;
	return 0;
}
