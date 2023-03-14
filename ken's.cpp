#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string Name;
int marks;

int CumScore=35;


void NameChecker(){
	bool correct = false;
    //handling name validation; "Checks if there are numbers in the name"
		for(int i = 0 ; i <Name.length();i++){
			if ((Name[i] >= 65 && Name[i] <= 90) || (Name[i] >= 97 && Name[i] <= 122) || Name[i] == 32) {
                correct = true;
            }
			else
			{
				correct = false;
			}
		}
		if(correct == 0){
			cout<<"Fatal Error without numbers"<<endl;
            cout<<"Re-enter Name : ";
            cin>>Name;
		}
}

void MarksChecker(){
    
    cout<<"Enter marks: ";
    cin>>marks;
    

    // validate marks
    while(1){
        if(cin.fail()){
            cout<<"Kindly enter a number"<<endl;
            cin.clear();
            cin.ignore(INT32_MAX,'\n');

            cout<<"Re-enter your scores : ";
            cin>> marks;
        }


        if(marks<61 && marks >= 0){
            break;
        }else if(!(marks<61 && marks >= 0)){
            cout<<"Invalid input. Please enter a numer between 0 and 60"<<endl;
            cout<<"Re-enter your scores : ";
            cin>> marks;
        }
    }
}

void TotalScore(){
    float TotalScore = CumScore + marks ;
    cout<<Name<<" : ";
    if(TotalScore>=50){
        cout<<"PASSED"<<endl;
    }
    if(TotalScore<50){
        cout<<"FAILED"<<endl;
    }
    
}

int main(){
    cout<<"Enter name: ";
    getline(cin,Name);
    NameChecker();
    MarksChecker();
    TotalScore();
    return 0;
}