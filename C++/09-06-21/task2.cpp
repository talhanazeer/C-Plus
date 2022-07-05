/*Task 2 [25]
The area of a rectangle is the rectangle’s length times its width. Write a program that asks for the length and width of two
rectangles and show its area.*/
#include<iostream>
#include<cmath>
using namespace std;
int main (){
	int L1, L2,  W1, W2, A1, A2;
	cout<<"Enter 1st rectangle width: "<<endl;
	cin>>W1;
	cout<<"Enter 1st rectangle lenght:  "<<endl;
	cin>>L1;
	cout<<"Enter 2nd rectangle width: "<<endl;
	cin>>W2;
	cout<<"Enter 2nd rectangle lenght:  "<<endl;
	cin>>L2;
	A1 = L1*W1;
	A2 = L2*W2;
	cout<<"First Rectangle Area is :  "<<A1<<endl;
	cout<<"First Rectangle Area is :  "<<A2<<endl;

}
