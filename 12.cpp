// Given an array of numbers, create a function which returns the same array but with each element's index in the array added to itself. This means you add 0 to the number at index 0, add 1 to the number at index 1, etc...

// Examples
// addIndexes([0, 0, 0, 0, 0]) ➞ [0, 1, 2, 3, 4]
// addIndexes([1, 2, 3, 4, 5]) ➞ [1, 3, 5, 7, 9]

#include <iostream>
#include <vector>
using namespace std;

vector <int> addIndexes(vector <int> arr){
    for(unsigned int i = 0; i < arr.size();i++){
        arr[i] += i;
    }
    return arr;
}

int main(){
    vector <int> arrTake = addIndexes({1,2,1,2});

    for(int i=0;i<arrTake.size();i++){
        cout<<arrTake.at(i)<<" "; 
    } 
    return 0;
}