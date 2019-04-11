#include<iostream> 
#include<bits/stdc++.h>
using namespace std;

int main() 
{ 
	int n1,n2;
	cout<<"enter number of elemnts in first array: ";
	cin>>n1;
	cout<<"enter number of elemnts in second array: ";
	cin>>n2;
	int arr[n1],arr1[n2],final[n1+n2];
	cout<<"enter the elements of first array :";
	for(int i=0;i<n1;i++)
		cin>>final[i];
	cout<<"enetr the elements of second array :";
	for(int i=n1;i<n1+n2;i++)
		cin>>final[i];
	int arr3[n1+n2]; 
	sort(final, final+(n1+n2)) ;
	cout << "Array after merging" <<endl; 
	for (int i=0; i < n1+n2; i++) 
		cout << final[i] << " "; 
	return 0; 
} 
