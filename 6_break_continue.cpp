#include <iostream>
using namespace std;

// Write a program to print all odd numbers till n.

// int main(){
//     int n;
//     cout<<"Enter the value of n :"<<endl;
//     cin>>n;

//     for (int i = 1 ; i<=n; i++){
//         if(i%2 ==0){
//             continue;
//         }
//         cout<<i<<endl;
//     }
//     return 0;
// }

// Write a program to print all odd numbers till n.


// int main() {
//     int n;
//     cout << "Hey there! Wanna check if a number is prime? Cool, give me a number: ";
//     cin >> n;

//     bool isPrime = true;

//     if (n <= 1) {
//         isPrime = false;
//     } else {
//         for (int i = 2; i * i <= n; i++) {
//             if (n % i == 0) {
//                 isPrime = false;
//                 break;
//             }
//         }
//     }

//     if (isPrime) {
//         cout << "Yep, " << n << " is a prime number. 🌟" << endl;
//     } else {
//         cout << "Sorry, " << n << " is not a prime number. 😕" << endl;
//     }

//     return 0;
// }


// Write a program to print all prime numbers in a given range

int main() {
int a,b;
cout<<"Enter 2 numbers: ";
cin>>a>>b;
for (int num=a; num<=b; num++) {
int i;
for (i=2; i<num; i++) {
if (num%i==0) { //it is not prime
break;
}
}
if (i==num) { //loop has completed all iterations
cout<<num<<endl;
}
}
return 0;
}