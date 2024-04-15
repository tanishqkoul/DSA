// Program to find the maximum among three numbers.
#include<iostream>
using namespace std;

// int main(){

// int a,b,c;
// cin>>a>>b>>c;

// if(a>b){

// if(a>c){
// cout<<a<<endl;
// }
// else{
// cout<<c<<endl;
// }
// }
// else{
// if(b>c){
// cout<<b<<endl;
// }
// else{
// cout<<c<<endl;
// }
// }

// return 0;
// }

// Program to check if a triangle is scalene, isosceles or equilateral.
int main()
{

int sidea, sideb, sidec;

cout << "Input three sides of triangle: \n ";
cin >> sidea >> sideb >> sidec;

if (sidea == sideb && sideb == sidec)
{
cout << "This is an equilateral triangle. \n ";
}
else if (sidea == sideb || sidea == sidec || sideb == sidec)
{
cout << "This is an isosceles triangle. \n ";
}
else
{
cout << "This is a scalene triangle. \n ";
}

return 0;
}