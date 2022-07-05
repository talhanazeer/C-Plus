/*
Date: 15/06/2021;
Name: Muhammad Talha
Description: Write a program that asks the user to enter a number within the range of 1
through 10. Use a switch statement to display the Roman numerical version of that number.
Do not accept a number less than 1 or greater than 10.
*/
#include<iostream>
using namespace std;
int main(){
	int input;
	cout<<"Enter your number in the range of 0to 10: "<<endl;
	cin>>input;

		switch(input){


			case 1:
				cout<<"Roman Form of 1 is I\n";
				break;
			case 12:
			case 2:
				cout<<"Roman Form of 2 is II\n";
				break;
			case 13:
			case 3:
				cout<<"Roman Form of 3 is III\n";
				break;

			case 4:
				cout<<"Roman Form of 4 is IV\n";
				break;
			case 15:
			case 5:
				cout<<"Roman Form of 5 is V\n";
				break;
			case 16:
			case 6:
				cout<<"Roman Form of 6 is VI\n";
				break;
			case 14:

				cout<<"Roman Form of 7 is VII\n";
				break;

			case 8:
				cout<<"Roman Form of 8 is VIII\n";
				break;

			case 9:
				cout<<"Roman Form of 9 is IX\n";
				break;

			case 10:
				cout<<"Roman Form of 10 is X\n";
				break;
			default:
				cout<<"Enter a valid Number and try again.";
		}

}
