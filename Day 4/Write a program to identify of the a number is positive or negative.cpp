#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"Enter Number: ";
	cin>>num;
	if(num==0) cout<<"Neither Negative Nor Positive";
	else if(num>0) cout<<"Positive";
	else cout<<"Negative";
	
	return 0;
}