// Create a function that takes an integer and returns an 
//array from 1 to the given number, where:
// If the number can be divided evenly by 4, 
//amplify it by 10 (i.e. return 10 times the number).
// If the number cannot be divided evenly by 4, simply return the number.

// Examples
// amplify(4) ➞ [1, 2, 3, 40]
// amplify(3) ➞ [1, 2, 3]

#include <iostream>
#include <vector>
using namespace std;

int givenNo;

vector <int> amplify(int number){
    vector <int> arr;
        for(unsigned  int x = 1; x < number+1; x++)
        {   
            while(x % number != 0){
                if(x % number == 0){
                    arr.push_back(x * 10);
                    return arr;
                    break;
                }
                arr.push_back(x);
        }
            return arr;
        }
}

int main(){
    cout<<"Enter number to check :";
    cin>>givenNo;

    vector <int> fArr = amplify(givenNo);

    for(int i=0; i<fArr.size(); i++){
        cout<<fArr[i] <<" ";
    }
    return 0;
}
