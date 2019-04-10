#include <iostream>
using namespace std;
int main()
{
  int num, rem, sum = 0;
  cout << "Enter a positive 3 digit integer: ";
  cin >> num;
  int checker = num;
  while(num != 0)
  {
      rem = num % 10;
      sum += rem * rem * rem;
      num /= 10;
  }
  if(sum == checker)
    cout <<"yes!! "<< checker <<" is an Armstrong number.";
  else
    cout <<"No!! "<< checker << " is not an Armstrong number.";
  return 0;
}
