#include <iostream>
using namespace std;
int main()
{
 int i,num,sum=0;
 cout<<"Enter a number: ";
 cin>>num;
 for(i=1;i<num;i++)
 {
 if(num%i==0)
 sum=sum+i;
 }
 if(num==sum)
 cout<<"Perfect number";
 else
 cout<<"Not a perfect number";
 return 0;
}
