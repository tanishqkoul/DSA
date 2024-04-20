#include <iostream>
using namespace std;

// Print a solid rectangle
int main(){
    int rows, columns;
    cout<<"Enter the no of rows :\n";
    cin>>rows;
    cout<<"Enter the no of columns :\n";
    cin>>columns;

    for (int i = 1; i<= rows; i++){
        for(int j = 1; j<= columns; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}