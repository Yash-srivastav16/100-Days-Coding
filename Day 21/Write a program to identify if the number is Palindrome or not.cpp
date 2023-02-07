#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int number,count=0,answer=0;
	cout<<"Enter a Number to Check :";
	cin>>number;
	int i=1;
	int temp=number;
	while(temp!=0){
		int digit=temp%10;
		answer=answer*(pow(10,i))+digit;
		temp=temp/10;
	}
	if(number==answer){
		cout<<"Pallindrome";
	}
	else{
		cout<<"Not";
	}
	return 0;
}