// Create a function that takes in an 
//array (slot machine outcome) 
//and returns true if all elements in the array are identical, 
//and false otherwise. The array will contain 4 elements.

// Examples
// testJackpot(["@", "@", "@", "@"]) ➞ true
// testJackpot(["abc", "abc", "abc", "abc"]) ➞ true

#include <iostream>
#include <vector>
using namespace std;


bool testJackpot(vector <string> arr){
    for(unsigned int i = 0;i <4;i++){
        if(arr[i]!= arr[i++]) return false;
    }
    return true;
}

vector <string> array = {"a","a","a","a"};

int main(){
    cout<<testJackpot(array);
return 0;
}