// Create a function that returns true if a string contains any spaces.

// Examples
// hasSpaces("hello") ➞ false
// hasSpaces("hello, world") ➞ true

#include <iostream>
using namespace std;

string word;
bool hasSpaces(string word){
    for(unsigned size_t = 0; size_t < word.length();size_t ++)
    {
        if(word[size_t] == ' ')
        {
            return true;
            break;
        }
    }
    return false;
}

int main(){
    cout<<"Enter statement : ";
    getline(cin,word);

    cout<<hasSpaces(word);
}
