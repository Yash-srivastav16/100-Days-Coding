#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int number;
	cout<<"Enter Number: "<<endl;
	cin>>number;
	
	int temp=number;
	int count=0;
	while(temp!=0){
		count++;
		temp=temp/10;
	}nt answer=0;	temp=number;
	
	
	while(temp!=0){
		int digit=temp%10;
		answer=answer+pow(digit,count);
		temp=temp/10;
	}if(number==answer){
		cout<<"Armstrong";
	}
	else{
		cout<<"Not";
	}
	
	return 0;
}