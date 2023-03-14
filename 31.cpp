// Create a function that takes a string and 
// returns the word count. The string will be a sentence.
// Examples
// countWords("Just an example here move along") ➞ 6
// countWords("This is a test") ➞ 4

#include <iostream>
#include <string>
using namespace std;

int countWords(string word){
    int spacesNo = 1;
        for(unsigned size_t = 0; size_t < word.size(); size_t++){
            if(word[size_t] == ' ')spacesNo+=1;
        }
    return spacesNo;
}

int main(){
    string sentence;
    cout<<"Enter sentence: ";
    getline(cin,sentence);
    cout<<"There are "<< countWords(sentence)<< " words in the statement";
    return 0;
}