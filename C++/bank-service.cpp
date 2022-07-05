#include <iostream>
using namespace std;
int main(){
	int balance, checks, fees,standard, extra;
	standard=10;
	cout<<"Enter Your Balance"<<endl;
	cin>>balance;
	cout<<"Enter Your Checks number: "<<endl;
	cin>>checks;
	if(checks<20){
		fees=standard + 10;
	}
	else if(checks>=20 && checks<=39){
		fees=standard + 8;
	}
	else if(checks>=40 && checks<=59){
		fees=standard + 6;
	}
    else{
		fees=standard + 4;
	}
	if(balance<400){
		fees= fees+15;
		cout<<"Bank service with extra charge is: "<<fees;
	}
	else
		{
			cout<<"Bank service fee is: "<<fees;
		}
	return 0;
}
