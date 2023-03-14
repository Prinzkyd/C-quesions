// Create a function that takes a word and returns the 
//new word without including the first character.

// Examples
// newWord("apple") ➞ "pple"
// newWord("cherry") ➞ "herry"
// newWord("plum") ➞ "lum"

#include <iostream>
#include <string>
using namespace std;

string word;

string newWord(string word){
    string word2;
    for(unsigned int i = 1; i < word.length();i++){
        word2.push_back(word[i]);
    }
    return word2;
}

int main(){
    cout<<"Enter word : ";
    cin>>word;
    cout<<"\t============================================================="<<endl;
    cout<<"\t\tWord with first letter removed is : "<< newWord(word)<<endl; 
    cout<<"\t============================================================="<<endl;
    return 0;
}