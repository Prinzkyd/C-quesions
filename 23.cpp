// Write a function that changes 
//every letter to the next letter:
//Example
// "a" becomes "b"
// "b" becomes "c"

#include <iostream>
#include <string>
using namespace std;

string word;

string move(string word){
    for(char &c : word){
        c+=1;
    }
    return word;
}

int main(){
    cout<<"Enter word : ";
    cin>>word;
    cout<<"=========================================="<<endl;
    cout<<"\tLetters changed : "<<move(word);
    return 0;
}


