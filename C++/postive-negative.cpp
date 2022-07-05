//Task 3 [00]
//Take n numbers from the user and determine that how many positive and negative integers were entered by the user.
#include <iostream>
using namespace std;
int main(){
	int positive, negative, num;
	num=1;
	positive = 0;
	negative = 0;
	while(num !=0){

		cout<<"Enter Your Number: "<<endl;
		cout<<" And Then Enter zero to get Your Result"<<endl;
		cin>>num;
		if(num == 0){
            break;
		}

		else if(num>0){
			positive = positive + 1;
		}

		else{
			negative = negative + 1;
		}


	}
	cout<<"Total "<<positive<<" integers are Positive"<<endl;
	cout<<" And "<<negative<< " integers are Negative"<<endl;
	return 0;
}
