// Create a function which makes the last character of a string repeat n number of times.

// Examples
// modifyLast("Hello", 3) ? "Hellooo"
// modifyLast("hey", 6) ? "heyyyyyy"

#include <iostream>
#include <string>
using namespace std;



string word;
int no;

string modifyLast(string str, int n) {
	while (n>1){
	str.push_back(str[str.size()-1]);
	n--;
	}
return str;
}

int main(){
    cout<<"Enter word : ";
    cin>>word;

    cout<<"Enter no : ";
    cin>>no;

    std::cout << modifyLast(word,no) << std::endl;
    return 0;
}