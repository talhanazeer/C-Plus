#include<iostream>
using namespace std;
int main(){
	int even, odd, i, num;
	i=1;
	even=0;
	odd=0;
	
	while(i<=10){
		
		cout<<"Enter Your "<<i<<" number"<<endl;
		cin>>num;
		if(num>0){
	
			if(num%2==0){
				even++;
			}
			else{
				odd++;
			}
			i++;
		}
		else
			cout<<"Enter Valid Number"<<endl;
	}
	cout<<"Odd Numbers : "<<odd<<" And Even Numbers: "<<even;
	return 0;
}
