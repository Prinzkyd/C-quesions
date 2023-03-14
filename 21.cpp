// Create a function that returns true when num1 is equal to num2; otherwise return false.

// Examples
// isSameNum(4, 8) ➞ false
// isSameNum(2, 2) ➞  true

#include <iostream>
using namespace std;

int a,b;

bool isSameNum(int a,int b){
    return a==b;
}

int main(){
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    
    cout<<isSameNum(a,b);
return 0;
}