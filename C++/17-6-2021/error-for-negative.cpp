#include <iostream>
using namespace std;
int main(){
	int num;
	cout<<" Input A valid Number: "<<endl;
	cin>>num;
	while(num<0){
		cout<<"Entered Number is Invalid"<<endl;
		cout<<"Try For Another One: "<<endl;
		cin>>num;
	}
	cout<<"Entered Number  : "<<num<<" is valid";
	return 0;
}

