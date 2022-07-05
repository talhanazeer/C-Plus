

#include<iostream>
using namespace std;
int main(){
	int i, num, count,   j=100, total_marks;
	i=1;
	float result  ,sum;
	sum=0;
	cout<<"Enter number of subject of which you want to know total result"<<endl;
	cin>>count;
	total_marks = count*j;
	while(i<=count){
		cout<<"Enter Your "<< i <<" subject number"<<endl;
		cin>>num;
		while(num >j){
           cout<<"Enter Valid "<< i <<" subject number less than 100"<<endl;
            cin>>num;
		}
		sum=sum+num;
		i++;
	}
	result=(sum/total_marks)*j;
	cout<<"Result of Your Entered Marks is: "<<result<<" %"<<endl;

	if(result>=90){
        cout<<"Grade is : A";
	}
	else if(result<=89 && result>=80){
        cout<<"Grade is : B";
	}
	else if(result<=79 && result>=70 ){
        cout<<"Grade is : C";
	}
	else if(result<=69 && result>=60){
        cout<<"Grade is : D";
	}

	else{
        cout<<"Grade is : F";
	}

}
