#include <iostream>


using namespace std;
int main(){
	//Day 1 coding Statement: Write a program to identify if the character is a vowel or consonant
	char word;
	cout<<"Enter A Character: ";
	cin>>word;
	if(word=='A' || word=='E' || word=='I' || word=='O' || word=='U' || word=='a' || word=='e' || word=='i' || word=='o' || word=='u' ) {
		cout<<"Vowel";
	}
	else if(word>=48 && word<=57){
		cout<<"Invalid";
	}
	else{
		cout<<"Constonant";
	}
	
	return 0;
}