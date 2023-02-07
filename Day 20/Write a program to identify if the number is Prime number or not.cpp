#include<iostream>
using namespace std;
int main(){
	int number;
	cout<<"Enter a Number: ";
	cin>>number;
	if(number==1 || number==0){
		cout<<"Not Prime";
		return 0;
	}	
	for(int i=2;i<number;i++){
		if(number%i==0){
			cout<<"Not Prime";
			return 0;
			break;			
		}
	}
	cout<<"Prime";	
	return 0;
}