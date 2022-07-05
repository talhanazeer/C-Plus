/*
Date: 15/06/2021;
Name: Muhammad Talha
Description:Write a program that asks the user to enter a number of seconds.?
There are 60 seconds in a minute. If the number of
seconds entered by the user is greater than or equal to 60,
the program should display the number of minutes in that many seconds.?
There are 3,600 seconds in an hour. If the number of seconds entered 
by the user is greater than or equal to 3,600, the
program should display the number of hours in that many seconds.
? There are 86,400 seconds in a day. If the number of seconds entered
 by the user is greater than or equal to 86,400, the
program should display the number of days in that many seconds.
*/
#include<iostream>
using namespace std;
int main(){
	int t, minutes, hours, days, m,h,d;
	m=60, h=3600, d=86400;
	cout<<"Enter Numbers of seconds: "<<endl;
	cin>>t;
	minutes = t/m;
	hours = t/h;
	days = t/d;
	if(t>=m && t< h){
		cout<<"Entered Seconds are equal to: "<<minutes<< " minutes"<<endl; 
	}
	else if(t>=h && t<d){
		cout<<"Entered Seconds are equal to: "<<hours<<"  hours"<<endl; 
	}
	else if(t>=d){
		cout<<"Entered Seconds are equal to: "<<days<<"  days"<<endl; 
	}
	else
	cout<<"Entered Seconds are "<< t<< " seconds"<<endl; 
	
	return 0;
	

}
