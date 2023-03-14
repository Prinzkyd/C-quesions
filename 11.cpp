// Write a function that takes a vector and a integer as arguments. Add the number to the end of the vector, then remove the first element of the vector. The function should then return the updated vector.

// Examples
// nextInLine({5, 6, 7, 8, 9}, 1) ➞ {6, 7, 8, 9, 1}
// nextInLine({7, 6, 3, 23, 17}, 10) ➞ {6, 3, 23, 17, 10}
// nextInLine({1, 10, 20, 42 }, 6) ➞ {10, 20, 42, 6}


#include <iostream>
#include <vector>
using namespace std;


vector<int> nextInLine(vector<int> que, int num) {
	vector <int> result;
    que.push_back(num);
        for (unsigned int  i = 1; i < que.size(); i++)
        {
            result.push_back(que[i]);
        }
	return result;
}

int main(){
    vector <int> arr= {2,3,4,5,6};
    vector <int> NewArr=nextInLine(arr,9);

    for(int i=0;i<arr.size();i++){
        cout<<NewArr.at(i)<<" "; 
        
    } 
    cout<<"End";
    return 0; 
}