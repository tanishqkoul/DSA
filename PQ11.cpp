#include<iostream>
using namespace std;

int main(){
    int i,j,r;
    cout <<"Enter the value of r :";
    cin>>r;

    for(i=1;i<=r;i++){
        for(j=1;j<=i;j++){
            if((i+j) %2 ==0)
                cout<<"1 ";
            else{
                cout<<"0 ";
            }
        }
        cout<<endl; // Move this line outside of the inner loop
    }
    return 0;
}
