// Create a function that takes two numbers as arguments (num, length) and returns an array of multiples of num until the array length reaches length.
// Examples
// arrayOfMultiples(7, 5) ➞ [7, 14, 21, 28, 35]
// arrayOfMultiples(12, 10) ➞ [12, 24, 36, 48, 60, 72, 84, 96, 108, 120]

#include <iostream>
#include <vector>
using namespace std;

vector <int> arrayOfMultiples(int x,int length){
    vector <int> result;
    for(unsigned int i = 1;i<length+1;i++){
        result.push_back(x*i);
    }
    return result;
}

int main(){
    int x,length;
    cout<<"Enter number :";
    cin>>x;
    cout<<"Enter length :";
    cin>>length;

    vector <int> multiples = arrayOfMultiples(x,length);
        for(unsigned int i = 0;i<multiples.size();i++){
            cout<<multiples[i]<<" ";
        }

    return 0;
}