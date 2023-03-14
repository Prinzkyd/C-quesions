// Create a function to count the number of 1s in a 2D array.
// Examples
// count_ones([[1, 0],[0, 0]]) ➞ 1
// count_ones([[1, 1, 1],[0, 0, 1],[1, 1,1]]) ➞ 7

#include <iostream>
#include <vector>
using namespace std;

vector <vector <int>> matrix = {{1,1,1},{0, 0, 1},{1, 1,1}};;

int count_ones(vector <vector <int> > matrix){
    int no1s=0;
        for( int i = 0;i<matrix.size();i++){
            for( int z = 0;z<matrix[i].size();z++){
                if(matrix[i][z]==1){
                    no1s+=1;
                }
            }
        }
    return no1s;
}

int main(){
    cout<<"THere are " <<count_ones(matrix)<<" number of ones in the array";
    return 0;
}