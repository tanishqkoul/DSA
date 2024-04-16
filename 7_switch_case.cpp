#include <iostream>
using namespace std;
// Write a program to write a simple calculator.
int main(){
    int n1,n2;
    char  op;

    cout << "enter the value if two  numbers :"<< endl;
    cin>>n1>>n2;

    cout << "Enter the operation u want to perform :[+,-,% ,/,* etc]"<<endl;
    cin>>op;

    switch (op)
    {
    case '+':
    cout<<n1+n2<<endl;
        break;
    
    case '-':
    cout<<n1-n2<<endl;
        break;
    
    case '/':
    cout<<n1/n2<<endl;
        break;
    
    case '*':
    cout<<n1*n2<<endl;
        break;
    
    case '%':
    cout<<n1%n2<<endl;
        break;
    
    default:
    cout<<"I am still learning ";
    }
    return 0;
}