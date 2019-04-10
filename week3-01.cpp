#include <iostream>
using namespace std;
int main(){
    char operators;
    int num1, num2;
    cout << "Enter operator :";
    cin >> operators;
    cout << "Enter two space seperated numbers :";
    cin >> num1 >> num2;
    switch(operators)
    {
        case '+':
            cout << num1+num2;
            break;
            
        case '-':
            cout << num1-num2;
            break;

        case '*':
            cout << num1*num2;
            break;

        case '/':
            cout << num1/num2;
            break;

        default:
            cout << "Invalid character"<<endl;
            break;
    }
    return 0;
}
