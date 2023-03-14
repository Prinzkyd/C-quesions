// Create a function that takes an array of numbers arr and returns an inverted array.
// Examples
// invertArray([1, 2, 3, 4, 5]) ➞ [-1, -2, -3, -4, -5]
// invertArray([1, -2, 3, -4, 5]) ➞ [-1, 2, -3, 4, -5]
// invertArray([]) ➞ []

#include <iostream>
#include <vector>
using namespace std;

vector <int> invertArray(vector <int> arr){
    for(unsigned int i=0;i<arr.size();i++){
        arr[i]=-arr[i];
    }
    return arr;
}

int main(){
    vector <int> array = {2,-3,4,5,-6,7,-8};
    vector <int> take = invertArray(array);
    
    for(int i = 0; i <take.size(); i++){
        cout<<take.at(i)<<" ";
    }

    return 0;
}