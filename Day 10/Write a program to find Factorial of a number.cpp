#include<iostream>
using namespace std;
int main ()
{
 int num;
 long fact = 1;
 cout<<"Enter a number: ";
 cin>>num;
 if(num < 0)
 cout<<"Invalid Input";
 else
 {
 for(int i = 1; i <= num; i++)
 fact = fact * i;
 }

 cout<<"Factorial is: "<<fact;
}