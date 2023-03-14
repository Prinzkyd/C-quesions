// Write a function that returns the length of a string. Make your function recursive.

// Examples
// length("apple") ➞ 5
// length("make") ➞ 4

#include <iostream>
#include <string>
using namespace std;

int length(string word){return word.length();}

int main(){
    string word;
    cout<<"ENter word : ";
    getline(cin, word);
        cout<<length(word)<<" are the number of characters.";
    return 0;
}