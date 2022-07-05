/*
Date: 15/06/2021;
Name: Muhammad Talha
Description:The following table shows the approximate speed of sound in air, water, and steel.
Medium Speed
Air 1,100 feet per second
Water 4,900 feet per second
Steel 16,400 feet per second
Write a program that displays a menu allowing the user to select 1 for air, 2 for water, or 3 for steel and display a message “Wrong
choice” otherwise. After the user has made a selection, he or she should be asked to enter the distance a sound wave will travel in
the selected medium. The program will then display the amount of time it will take by rounding the answer to four decimal places.
*/
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int choice;
	double air, water, steel,  time,distance;
	air = 1100 ;
	water = 4900 ;
	steel = 16400;
	
	cout<<"Enter 1 for calculating sound travelling time in air"<<endl;
	cout<<"Enter 2 for calculating sound travelling time in water"<<endl;
	cout<<"Enter 3 for calculating sound travelling time in steel"<<endl;
	cin>>choice;
	switch(choice){
		case 1 :
			cout<<"Enter distance in feet: "<<endl;
			cin>>distance;
			time = distance/air;
			cout<<"Time will be taken by sound to travel this distance is : "<<fixed<<setprecision(4)<<time;
			break;
			
		case 2 :
			cout<<"Enter distance in feet: "<<endl;
			cin>>distance;
			time = distance/water;
			cout<<"Time will be taken by sound to travel this distance is : "<<fixed<<setprecision(4)<<time;
			break;
		case 3 :
			cout<<"Enter distance in feet: "<<endl;
			cin>>distance;
			time = distance/steel;
			cout<<"Time will be taken by sound to travel this distance is : "<<fixed<<setprecision(4)<<time;
			break;
		default:
		cout<<"Wrong Choice try again later"<<endl;	
	}
}
