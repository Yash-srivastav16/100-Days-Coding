#include <iostream>
using namespace std;
int main()
{
 int num,sum=0;
 cout<<"Enter the number: ";
 cin>>num;
 for(int i=1;i<=num;i++)
 sum=sum+i;
 cout<<sum;
 return 0;
}