#include <iostream>
using namespace std;
int main(){
	int i=1,largest=0, num;
	while(i<=20){
		cout<<"Enter Your "<<i<<" Number"<<endl;
	cin>>num;
	if(num>largest){
	largest=num;}
	i++;
	}
	cout<<"Largest among these 20 numbers is: "<<largest;
	return 0;
}
