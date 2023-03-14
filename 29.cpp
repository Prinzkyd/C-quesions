// Create a function that takes a string and returns 
//a string in which each character is repeated once.
// Examples
// doubleChar("String") ? "SSttrriinngg"
// doubleChar("Hello World!") ? "HHeelllloo  WWoorrlldd!!"

#include <iostream>
#include <string>
using  namespace std;

string doubleChar(string word){
    string a;
        for (size_t i = 0; i < word.size(); i++)
        {
            a.push_back(word[i]);
            a.push_back(word[i]);
        }
    return a;
}

int main(int argc, const char** argv) {
    cout<<doubleChar("heyy");
    return 0;
}

//string doubleChar(string word){
//    string newWord = "";()
//        for (size_t i = 0; i < word.length(); i++)
//        {
//            newWord += word[i];
//            newWord += word[i];
//        }
//    return newWord;
//}

