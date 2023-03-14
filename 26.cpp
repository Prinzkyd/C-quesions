// Write a function that takes two arrays (arr1 and arr2) 
//and an int n, and returns true if the second array 
//is equal to the first array shifted by n positions. 
//Otherwise, return false.

// Examples
// circularShift([1, 2, 3, 4], [3, 4, 1, 2], 2) ➞ true
// circularShift([1, 1], [1, 1], 6) ➞ true

#include <iostream>
#include <vector>
using namespace std;

vector <int> array1 = {1,2,3,4};
vector <int> array2 = {3,4,1,2};
bool circularShift(vector <int> arr1,vector <int> arr2, int n ){
    for (int i=0; i<arr1.size(); i++){
		while (i+n>=arr1.size()){n-=arr1.size();}
			if (arr1[i]!=arr2[i+n]){
				return false;
			}
	}
	return true;
}

int main(int argc, const char** argv) {
	std::cout<< circularShift(array1,array2,3) << std::endl;
	return 0;
}