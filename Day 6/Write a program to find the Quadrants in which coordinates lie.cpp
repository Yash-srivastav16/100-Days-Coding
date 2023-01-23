#include<iostream>
using namespace std;
int main(){
	int x,y;
	cout<<"Enter value of X: "<<endl;
	cin>>x;
	cout<<"Enter value of Y: "<<endl;
	cin>>y;
	
	if(x>0 && y>0) cout<<"First Quadrant";
	else if(x<0 && y>0) cout<<"Second Quadrant";
	else if(x<0 && y<0) cout<<"Third Quadrant";
	else cout<<"Fourth Quadrant";
	return 0;
}