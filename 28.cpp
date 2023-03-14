// Create a function that takes an integer and returns an array from 1 to the given number, where:
// If the number can be divided evenly by 4, amplify it by 10 (i.e. return 10 times the number).
// If the number cannot be divided evenly by 4, simply return the number.

// Examples
// amplify(4) ➞ [1, 2, 3, 40]
// amplify(3) ➞ [1, 2, 3]
// amplify(25) ➞ [1, 2, 3, 40, 5, 6, 7, 80, 9, 10, 11, 120, 13, 14, 15, 160, 17, 18, 19, 200, 21, 22, 23, 240, 25]

#include <iostream>
#include <vector>
using namespace std;

vector <int>  amplify(int no){
    vector <int> result;
        for(unsigned int i = 1; i <= no; i++){
            if(i % 4 == 0){
                result.push_back(i*10);
            }
            if(1 % 4 != 0){
                result.push_back(i);
            }
        }
        return result;
}

int main(){
    int i;
    cout<<"Enter number: ";
    cin>>i;
    vector <int> result = amplify(i);
        for(unsigned int size_t = 0; size_t < result.size(); size_t++){
            cout<<" "<<result[size_t]<<" ";
        }
        return 0;
}
