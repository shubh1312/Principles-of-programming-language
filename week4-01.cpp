#include <bits/stdc++.h>
using namespace std;
int main(){
	int num;
	cout<<"enter the number of elements in your list :";
	cin>>num;
	int arr[num];
	cout<<"enter the elements in array :";
	for(int i=0;i<num;i++)
		cin>>arr[i];
	sort(arr,arr+num);
	for (int i=num-2; i>=0; i--){
		if (arr[i]<arr[num-1]){
			cout<<"second largest element is :"<<arr[i]<<endl;
			break;
			}
	}
	return 0;
}
