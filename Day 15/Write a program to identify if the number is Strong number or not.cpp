#include <iostream>
using namespace std;
int main()
Talent Battle 100 Days Coding Series
{
 int num,rem,fact,sum=0;
 cout<<"Enter a number: ";
 cin>>num;
 int copy=num;
 if(num==0)
 sum=sum+fact;
 else
 {
 while(copy!=0)
 {
 rem=copy%10;
 fact=factorial(rem);
 sum=sum+fact;
 copy=copy/10;
 }}
 if(sum==num)
 cout<<"Strong number";
 else
 cout<<"Not a strong number";
 return 0;
}