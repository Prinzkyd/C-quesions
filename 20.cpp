// Create a function that removes the first 
// and last characters from a string.

// Examples
// removeFirstLast("hello") ➞ "ell"
// removeFirstLast("maybe") ➞ "ayb"
#include <iostream>
#include <string>

using namespace std;

string removeFirstLast(string word){
    return word.substr(1,word.size()-2);
}

int main(){
cout<<"Enter Word : ";
	string word;
	cin>>word;
	
    cout<<removeFirstLast(word);
    return 0;
}