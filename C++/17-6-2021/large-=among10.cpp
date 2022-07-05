#include <iostream>
using namespace std;
int main(){
	int i,largest, num;
	i=1;
	largest=0;
	while(i<=3){
		cout<<"Enter Your "<<i<<" Number"<<endl;
	cin>>num;
	if(num>largest){
	largest=num;}
	i++;
	}
	cout<<"Largest among these 10 numbers is: "<<largest;
	return 0;
}
