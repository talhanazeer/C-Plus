
#include<iostream>
using namespace std;
int main(){
	int num,finish,last, smallest;
	num=1;
	finish=0;
    smallest;
    cout<<"Enter Your Number: "<<endl;
    cin>>smallest;
	while(num != finish){
		last=num;
		if(last<smallest){
			smallest=last;
		}
		cout<<"Enter Your Number: "<<endl;
		cin>>num;

	}


	cout<<"Your last non-zero smallest number was: "<<smallest;
	return 0;
}
