// Given a pH value, return whether that value is "alkaline" (greater than 7), "acidic" (less than 7), or "neutral" (7). Return "invalid" if the value given is less than 0 or greater than 14.

// pHName(5) ➞ "acidic"
// pHName(8.7) ➞ "alkaline"
// pHName(7) ➞ "neutral"
// Notes

// Values such as 6.9999 and 8.00001 should return "acidic" and "alkaline" respectively.

#include <string>
#include <iostream>
using namespace std;

string pHName(int scale){
    if (scale < 0) return "invalid";
    if (scale > 7) return "alkaline";
    if (scale < 7) return "acidic";
    if (scale = 7) return "neutral";
}

int main(){
int ScaleTake;
cout<<"Enter Scale :";
cin>>ScaleTake;
cout<<pHName(ScaleTake);
    return 0;
}
