#include<iostream>
using namespace std;
long square(int x, int end){
	long square = 1;
	for(int j=0;j<end;j++)
			square*=x;
	return square;
}
long factorial(int end){
	long fact = 1;
	for(int j=1;j<=end;j++)
			fact*=j;
	return fact;
}

int main(){	
	int x;
	cout<<"expression is 1-(x^2/2!)+(x^4/4!)";
	cout<<"-(x^6/6!)-(x^8/8!)-(x^10/10!)"<<endl;
	cout<<"Enter x :";
	cin>>x;
	double sum = 1;
	for(int i=1;i<=5;i++)
	{	
		long numerator,denominator;
		numerator = square(x,i*2);
		denominator = factorial(i*2);
		if(i%2==0)
			sum=sum+(double(numerator)/denominator);
		else
			sum=sum-(double(numerator)/denominator);
	}
	cout<<"Result :"<<sum;
	return 0;
}
