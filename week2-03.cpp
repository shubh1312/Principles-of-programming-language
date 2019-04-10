#include <iostream>
using namespace std;
int main(){
  int limit;
  cout << "Enter the limit :";
  cin >> limit;
  cout<<"prime number from 1 to "<<limit<<" are :";
	for(int i=2;i<=limit;i++){
		int flag=0;
  		for(int j= 2; j <= i / 2; j++)
  		{
      		if(i % j == 0)
      		{
          		flag = 1;
          		break;
      		}
  		}
  		if (flag == 0)
      		cout << i<<" ";
	}
  return 0;
}
