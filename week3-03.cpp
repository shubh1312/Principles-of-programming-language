#include<iostream>
#include<math.h> 
using namespace std;
int main(){
	float r1,r2,a,b,c,d,imaginary,real;
	cout<<"expression is ax^2+bx+c=0"<<endl;
	cout<<"Enter space seperated values of a,b and c:";
	cin>>a>>b>>c;
	
	d=(b*b)-(4*a*c);
	if(d>=0)
	{
		cout<<"Two roots are :";
		r1=(-b+sqrt(d))/(2*a);
		r2=(-b-sqrt(d))/(2*a);
		cout<<r1<<" and "<<r2;
	}
	else
	   {
			real = -b/(2*a);
            imaginary = sqrt(-d)/(2*a);
        	cout<<"Roots are "<<real<<"+"<<imaginary;
			cout<<"i and "<<real<<"-"<<imaginary<<"i"<<endl;
		}
 	return 0;
}
