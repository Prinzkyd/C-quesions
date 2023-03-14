#include <bits/stdc++.h>
#include <iostream>


using namespace std;

int main(){
	int c=0;
	int f;
	string s;
	cin>>s;
		while(c==1){
			for(int i=0;i<s.size();i++){
				if(!isdigit(s[i])){
					c=1;
					cout<<"Fatal Error. Enter a number"<<endl;
					getline(cin,s);
				}else{
					cout<<"Numberic"<<endl;
					c=0;break;
				}
			}
		}
		if(c==1){
			cout<<"Not Numeric"<<endl;
		}else{
			cout<<"Numeric"<<endl;
			int z= stoi(s);
			cout<<"Number is : "<<z;
			
		}
		
		
	
	return 0;
}