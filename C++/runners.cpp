//Task 2 [00]
//Write a program that asks for the names of three runners and the time it took each of them to finish a race. The program should
//display who came in first, second, and third place.
#include <iostream>
using namespace std;
int main(){
	int  time1, time2, time3;
	string runner1, runner2, runner3;
	cout<<"Enter Name Of First Runner: "<<endl;
	cin>>runner1;
	cout<<"Enter Time of "<< runner1<<" to complete race"<<endl;
	cin>>time1;
	cout<<"Enter Name Of Second Runner: "<<endl;
	cin>>runner2;
	cout<<"Enter Time of "<< runner2<<" to complete race"<<endl;
	cin>>time2;
	cout<<"Enter Name Of Third Runner: "<<endl;
	cin>>runner3;
	cout<<"Enter Time of "<< runner3<<" to complete race"<<endl;
	cin>>time3;
	if(time1<time2 && time2<time3){
		cout<<runner1<<" Came First"<<endl;
		cout<<runner2<<" Came Second"<<endl;
		cout<<runner3<<" Came Third";
	}
	else if(time2<time3 && time3<time1){
		cout<<runner2<<" Came First"<<endl;
		cout<<runner3<<" Came Second"<<endl;
		cout<<runner1<<" Came Third";
	}
	else if(time3<time1 && time1<time2){
		cout<<runner3<<" Came First"<<endl;
		cout<<runner1<<" Came Second"<<endl;
		cout<<runner2<<" Came Third";
	}
	else if(time1<time3 && time3<time2){
		cout<<runner1<<" Came First"<<endl;
		cout<<runner3<<" Came Second"<<endl;
		cout<<runner2<<" Came Third";
	}
	else if(time2<time1 && time1<time3){
		cout<<runner2<<" Came First"<<endl;
		cout<<runner1<<" Came Second"<<endl;
		cout<<runner3<<" Came Third";
	}
	else{
		cout<<runner3<<" Came First"<<endl;
		cout<<runner2<<" Came Second"<<endl;
		cout<<runner1<<" Came Third";
	}
	return 0;
}
