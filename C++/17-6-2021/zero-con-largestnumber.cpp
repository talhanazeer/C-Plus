#include<iostream>
using namespace std;
int main(){
	int num,finish,last, largest;
	num=1;
	finish=0;
	largest=0;
	
	while(num != finish){
		last=num;
		if(last>largest){
			largest=last;
		}
		
		cout<<"Enter Your Number: "<<endl;
		cin>>num;
		
	}

		
	cout<<"Your last non-zero largest number was: "<<largest;
	return 0;
}
