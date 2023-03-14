// Create a function that takes a string (a random name). If the last character of the name is an "n", return true, otherwise return false.

// Examples
// isLastCharacterN("Aiden") ➞ true
// isLastCharacterN("Piet") ➞ false

#include <iostream>
#include <string>
using namespace std;

//  Personal
// bool isLastCharacterN(string name){
//     for(int i = 0; i < name.length();i++){
//         char c = name[i];
//             if(c == 'n'){
//                 return true;
//             }else{
//                 return false;
//             }
//     }
// }

bool isLastCharacterN(std::string w) {
	return w.back() == 'n';
}

int main(){
    string NAme ;
    cout<<"Enter Name : ";
    getline(cin,NAme);
    cout<<isLastCharacterN(NAme);
}