#include<iostream>
using namespace std;
int main(){
	int month,year;
	cout<<"Enter Months: "<<endl;
	cin>>month;
	cout<<"Enter Year: "<<endl;
	cin>>year;
	
	if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12) cout<<"31";
	else if(month==2){
		if ((year % 400 == 0) and (year % 100 == 0)){
		  	cout<<"29";
		}
		else if ((year % 4 ==0) and (year % 100 != 0)){
    		cout<<"29";
		}
		else{	
    		cout<<"28";
		}
	}
	
	else{
		cout<<"30";
	}
	
	return 0;
}