// Create a function that takes an array and a string as arguments and return the index of the string.

// Examples
// findIndex(["hi", "asd", "fgh", "abc"], "fgh") ➞ 2
// findIndex(["Red", "blue", "Blue", "Green"], "blue") ➞ 1

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int position;

int findIndex(vector <string> arr,string word){
    for(int i = 0; i< arr.size();i++){
        if(arr[i] == word){
            position = i;
            return ++i;
        }
    }
}

int main(){
    string word = "emma";
    std::cout << "Position of " << word << " : "<<findIndex({"hey","heye","Prince","emma"},word) << std::endl;
    return 0;
}