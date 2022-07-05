#include<iostream>
using namespace std;
int main(){
	int i, num,num2,power;
	i=1;
	power=1;
	cout<<"Enter Your First Number: "<<endl;
	cin>>num;
	cout<<"Enter Your Second Number of Power: "<<endl;
	cin>>num2;
	while(i<=num2){
		power= power*num;
		i++;
	}
	cout<<num<<" raise to power "<<num2<<" is: "<<power;
	return 0;
}


