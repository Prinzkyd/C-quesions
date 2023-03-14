// Create a function that counts how many D's are in a sentence.

// Examples
// countDs("My friend Dylan got distracted in school.") ➞ 4
// countDs("Debris was scattered all over the yard.") ➞ 3

#include <iostream>
#include <string>
using namespace std;

int noOD = 0;

int countDs(string statement){
    for(int i = 0; i < statement.length();i++){
        if(statement[i] == 'd'|| statement[i] == 'D'){
            noOD+= 1;
        }
    }
    return noOD;
}

int main(){
        cout<<"Enter statement : ";
        string statement;
        getline(cin,statement);

        cout<<"There are " << countDs(statement)<< " amount od D's in your statement";
    return 0;
}