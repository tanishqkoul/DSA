#include<iostream>
using namespace std;

int a=10;
int b;
b = a++;
cout<<a<<" "<<b<<endl;

int a=10;
int b;
b = ++a;
cout<<a<<" "<<b<<endl;


int n;
cin>>n;
if(n<10){
cout<<"Less than 10"<<endl;
}
else if(n==10){
cout<<"Equal to 10"<<endl;
}
else{
cout<<"More than 10"<<endl;
}