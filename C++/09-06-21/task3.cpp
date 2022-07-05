/*Task 3 [25]
Write a program that input student rollNo., name, email and CGPA from the user and display it on the console.
*/
#include<iostream>
#include<string.h>
using namespace std;
int main(){
	float cgpa;
	string name, roll , email;
	cout<<"Enter Your Name: "<<endl;
	getline(cin,name);
	cout<<"Enter Your Roll Number: "<<endl;
	getline(cin,roll);
	cout<<"Enter Your Email: "<<endl;
	getline(cin,email);
	cout<<"Enter Your CGPA: "<<endl;
	cin>>cgpa;
	cout<<" Your Name is: "<<name<<endl;
	cout<<" Your Roll Number: "<<roll<<endl;
	cout<<" Your Email: "<<email<<endl;
	cout<<" Your CGPA: "<<cgpa<<endl;
	
	
	
}
