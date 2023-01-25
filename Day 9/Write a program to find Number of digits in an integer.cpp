#include<iostream>
using namespace std;
int main(){
	int number,count=0;
	cout<<"Enter the Number: ";
	cin>>number;
	
	while(number!=0){
		number=number/10;
		count++;
	}
	cout<<"Digits in the Number are: "<<count;	
	return 0;
}