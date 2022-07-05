#include<iostream>
using namespace std;
int main(){
	int i=1, num, rep=3, sum=0, average;

	while(i<=rep){
		cout<<"Enter Your "<< i <<" number"<<endl;
		cin>>num;
		sum=sum+num;
		i++;
	}
	average=sum/rep;
	cout<<"Average of Your Entered Numbers is: "<<average<<endl;
	if(average>80){
        cout<<"You are above average";
	}
}
