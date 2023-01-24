#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int a,b,c,r1,r2;
	cout<<"Enter the value of a,b,c: ";
	cin>>a>>b>>c;
	
	int d= b*b-4*a*c;
	if(d>0){
		
      r1 = (-b+sqrt (d)) / (2*a);
      r2 = (-b-sqrt (d)) / (2*a);
      cout<<"The Real Roots are: "<<r1<<" "<<r2;
	}
	else if(d==0){
		r1 = -b/(2*a);
      	r2 = -b/(2*a);
      	cout<<"The Roots are Equal: "<<r1<<" "<<r2;
	}
	else{
		cout<<"The Roots are Imaginary";
	}
	return 0;
}