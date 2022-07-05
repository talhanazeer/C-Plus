/*
Date: 15/06/2021;
Name: Muhammad Talha
Description:The area of a rectangle is the rectangle’s length times its width. Write a program that 
asks for the length and width of two rectangles. The program should tell the user which rectangle 
has the greater area, or if the areas are the same.
*/
#include<iostream>
using namespace std;
int main(){
	int l1,l2,w1,w2,a1, a2;
	cout<<"Enter The Length of First Rectangle: "<<endl;
	cin>>l1;
	cout<<"Enter The Length of First Rectangle: "<<endl;
	cin>>w1;
	cout<<"Enter The Length of Second Rectangle: "<<endl;
	cin>>l2;
	cout<<"Enter The Length of Second Rectangle: "<<endl;
	cin>>w2;
	a1 = l1*w1;
	a2 = l2*w2;
	if(a1>a2){
		cout<<a1<<"is area of first rectangle which is greater than th area of 2nd one "<<a2<<endl;
		cout<<"Area of First rectangle is: "<<a1<<endl<<"Area of Second rectangle is: "<<a2<<endl;
	}
	else if(a1==a2){
		cout<<a1<<" is Equal to "<<a2<<endl;
		cout<<"Area of First rectangle is: "<<a1<<endl<<"Area of Second rectangle is: "<<a2<<endl;
	}
	else(a1<a2);
		cout<<a2<<" is greater than "<<a1<<endl;
		cout<<"Area of First rectangle is: "<<a1<<endl<<"Area of Second rectangle is: "<<a2<<endl;
}
	

