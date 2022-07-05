/*Task 1 [25]
Write a program that converts Fahrenheit temperatures to Celsius temperatures. The formula is

 =
5
9
( - 32)
C is the Celsius temperature and F is the Fahrenheit temperature*/
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){
	double C , F , a , b ,  z;
	cout<<"Enter Your Num: "<<endl;
	cin>>F;
	a=5, b=9;
	z= a/b;
	C= z*(F-32);
	cout<<C;
	
}


