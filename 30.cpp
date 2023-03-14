// Create a function that takes a string and returns the number (count) of vowels contained within it.
// Examples
// countVowels("Celebration") ➞ 5
// countVowels("Palm") ➞ 1
#include <iostream>
#include <string>
using namespace std;

int countVowels(string word){
    int VowelNo = 0;
        for(unsigned int i = 0; i<word.size(); i++){
            if(word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u'){
                VowelNo+=1;
            } 
        }
    return VowelNo;
}

int main(){
    string word;
    cout<<"Enter word : ";
    cin>> word;
    cout<<"There are "<< countVowels(word) << " number/s in the word "<< word;
    return 0;
}