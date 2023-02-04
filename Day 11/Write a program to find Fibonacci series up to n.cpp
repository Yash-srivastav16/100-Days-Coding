#include <iostream>
using namespace std;
int main()
{
 int num, a=-1,b=1,c;
 cout<<"Enter a number: ";
 cin>>num;
 cout<<"Fibonacci series: ";
 for(int i=0;i<num;i++)
 {
 c=a+b;
 cout<<c<<",";
 a=b;
 b=c;
 }
 return 0;
}
