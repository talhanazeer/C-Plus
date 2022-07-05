#include <iostream>
using namespace std;
int main(){
	int i,j,num;
	i=1;
	j=1;
	cout<<"Enter Your Number:"<<endl;
	cin>>num;
	while(i<=num){
		if(num%i==0){
			if(j==1){
				cout<<"divisor of "<<num<<" are: ";
				
				
				j--;
			}
			cout<<" "<<i;
		}
	
	i++;
	}
	return 0;
}
