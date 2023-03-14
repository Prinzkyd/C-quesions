// Create a function that takes an array of
//numbers and returns only the even values.
// Examples
// noOdds([1, 2, 3, 4, 5, 6, 7, 8]) ➞ [2, 4, 6, 8]
// noOdds([43, 65, 23, 89, 53, 9, 6]) ➞ [6]

#include <iostream>
#include <vector>
using namespace std;

vector <int> noOdds(vector <int> arr){
    vector <int> newArr;
        for(unsigned int i = 0;i<arr.size();i++ ){
            if(arr[i]%2==0) newArr.push_back(arr[i]);
        }
    return newArr;
}

int main(){
    vector <int> arr = {2,3,4,5,6,7,8,9,10};
    vector <int> PerfectDivArr = noOdds(arr);
        
    return 0;
}