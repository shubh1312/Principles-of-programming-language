#include <iostream>
using namespace std;
int main()
{
    float x,y;
    cout<<"Expression-> (x + y)(x - y)"<<endl;
    cout<<"Enter space seperated x,y :";
    cin>>x>>y;
    cout<<"result :"<<(x*x)-(y*y);
    return 0;
}
