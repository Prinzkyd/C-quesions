// Create a function that takes a single string as argument 
// and returns an ordered array containing 
// the indices of all capital letters in the string.

// Examples
// indexOfCaps("uDeMyS") ? [1, 3, 5]
// indexOfCaps("eQuINoX") ? [1, 3, 4, 6]
#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector <int> arr;

vector <int> indexOfCaps(string word){
    for(unsigned int i = 0; i< word.length(); i++){
        if(isupper(word[i])){
            arr.push_back(++i);
		}
    }
}

int main(){
	cout<<"Enter Word : ";
	string word;
	cin>>word;
	
	indexOfCaps(word);
        cout<<"Capitals are at positions : ";
        for(unsigned size_t = 0; size_t < arr.size();size_t++){
            cout<<arr.at(size_t)<< " ";
        }
    return 0;
}
