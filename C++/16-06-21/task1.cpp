/*
Date: 15/06/2021;
Name: Muhammad Talha
Description: Write a program that asks the user to enter two numbers. The program should 
use the conditional operator to determine which number is the smaller and which is the 
larger and display them in their ascending order.
*/
#include<iostream>
using namespace std;
int main(){
	int num_1, num_2;
	cout<<"Enter Your First number: "<<endl;
	cin>>num_1;
	cout<<"Enter Your Second number: "<<endl;
	cin>>num_2;
	if(num_1>num_2){
		cout<<num_1<<" is greater than "<<num_2<<endl;
		cout<<"And their asscending order is: "<< num_2<<"\t"<<num_1<<endl;
	}
	else if(){
	
		cout<<num_2<<" is greater than "<<num_1<<endl;
		cout<<"And their asscending order is: "<< num_1<<"\t"<<num_2<<endl;
	}
	else 
		cout<<num_2<<" is equal to the "<<num_1<<endl;
		cout<<"And numbers are: "<< num_1<<"\t"<<num_2<<endl;
	return 0;
}
