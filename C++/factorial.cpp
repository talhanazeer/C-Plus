#include <iostream>
using namespace std;
int main(){
	int i,num,factorial;
	factorial=1;
	i=1;
	cout<<"ENTER YOUR NUMBER"<<endl;
	cin>>num;
	while(i<=num){
		factorial= factorial*i;
		i++;
	}
	cout<<"Factorial Of Your Number Is: "<<factorial;
	return 0;
}
