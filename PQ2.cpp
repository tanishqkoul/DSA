// Print a hollow rectangle
#include<iostream>
using namespace std;

int main(){
    int rows, columns;
    cout<<"Enter the no of rows :\n";
    cin>>rows;
    cout<<"Enter the no of columns :\n";
    cin>>columns;

    for (int i = 1; i<=rows; i++){
        for (int j =1; j<=columns;j++){
            if(i ==1 || i == rows || j ==1 || j == columns){
                cout<<"*";
            }
            else{
                cout << " ";
            }
        }
        cout<<"\n";
    }
    return 0;
}