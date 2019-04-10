#include<iostream>
using namespace std;
int main(){
    int length;
	cout<<"Enter the length of series :";
    cin>>length;
	cout<<"Series of "<< length<<" terms is :"<<endl;
	int num1 = 0,num2 = 1,next = 0;
	for (int i = 1; i <= length; ++i)
    {
        if(i==1)
        {
            cout<<num1<<" ";
            continue;
        }
        if(i==2)
        {
            cout<<num2<<" ";
            continue;
        }
        next=num1+num2;
        num1=num2;
        num2=next;
        
        cout<<next<<" ";
    }
    return 0;
}
