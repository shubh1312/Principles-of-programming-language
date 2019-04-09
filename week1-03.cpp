#include <iostream>
using namespace std;
int main(){
    cout<<"Expresion is ((a + b / c * d - e) * (f - g))"<<endl;
    cout<<"Enter space seperated a,b,c,d,e,f,g ->";
    float a,b,c,d,e,f,g;
    cin>>a>>b>>c>>d>>e>>f>>g;
    float numerator = a+b;
    float denominator = c*d-e;
    float sec_value=f-g;
    float Division = numerator/denominator;
    float result= Division*sec_value;
    cout<<"Result :"<<result<<endl;
    return 0;
}
