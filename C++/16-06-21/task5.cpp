/*
Date: 15/06/2021;
Name: Muhammad Talha
Description:
A software company sells a package that retails for 99. Quantity discounts are given according to the following table.
Quantity Discount
10 – 19 20%
20 – 49 30%
50 – 99 40%
100 or more 50%
Write a program that asks for the number of units sold (must be greater then zero) and computes the total cost of the purchase.
*/
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	double pkg_price,discount, total_cost,n, purchase;
	pkg_price = 99;
	cout<<"Enter number of packages sold :"<<endl;
	cin>>n;
	if(n > 0){
		if(n>=10 && n<=19){
			discount = (20 * pkg_price)/100;
			total_cost = pkg_price - discount;
			purchase = total_cost * n;
			cout<<"Total Purchase Price is: "<<purchase;
		}
		
		else if(n>=20 && n<=49){
			discount = (30 * pkg_price)/100;
			total_cost = pkg_price - discount;
			purchase = total_cost * n;
			cout<<"Total Purchase Price is: "<<purchase;
		}
		
		else if(n>=50 && n<=99){
				discount = (40 * pkg_price)/100;
			total_cost = pkg_price - discount;
			purchase = total_cost * n;
			cout<<"Total Purchase Price is: "<<purchase;
		}
		else{
		
			discount = (50 * pkg_price)/100;
			total_cost = pkg_price - discount;
			purchase = total_cost * n;
			cout<<"Total Purchase Price is: "<<purchase;
		}
	}
	else
	cout<<"Enter valid number and try again";
}

