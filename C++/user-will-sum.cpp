#include <iostream>
using namespace std;
int main(){
	int i,n,num,sum;
	sum=0;
	i=1;
	cout<<"Input how many numbers u want to get Sum of"<<endl;
	cin>>n;
	while(i<=n){
		cout<<"Input "<<i<<" number"<<endl;
		cin>>num;
		sum=sum+num;
		i++;
	}
	cout<<sum;
	return 0;

}
