#include <iostream>
using namespace std;
int main(){
	int i,num,sum;
	sum=0;
	i=1;
	while(i<=10){
		cout<<"Input"<<" "<< i<< " "<<"number"<<endl;
		cin>>num;
		sum=sum+num;
		i++;
	}
	cout<<sum;
	return 0;
	
}
