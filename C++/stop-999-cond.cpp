#include<iostream>
using namespace std;
int main(){
	int a, sum;
	a=0;
	sum=0;
	while(a != -999){
        sum=sum+a;
		cout<<"Enter A number to add : "<<endl;
		cin>>a;
		}
	cout<< "The Sum of Entered Numbers is: "<<sum;
	return 0;
}
