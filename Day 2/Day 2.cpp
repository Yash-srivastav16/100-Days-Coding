#include<iostream>
using namespace std;
//Write a program to identify if the character is an alphabet or not.
int main(){
	char a;
	cout<<"Enter Any Character: ";
	cin>>a;
	
	if((a>='A' && a<='Z') || (a>='a' && a<='z')){
		cout<<"Alphabet";
	}
	else{
		cout<<"Not an Alphabet";
	}
	return 0;
}