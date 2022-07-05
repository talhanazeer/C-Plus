#include <iostream>
using namespace std;
int main(){
	int  num=1,largest, finish=0;
	largest=0;

	while(num != finish){
		cout<<"Input Your  Number"<<endl;
		cin>>num;

		if(num>largest){
			largest=num;
		}
	}
	cout<<" Largest Number Is: "<<largest;
	return 0;
}
