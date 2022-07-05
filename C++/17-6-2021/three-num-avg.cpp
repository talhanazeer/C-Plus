#include<iostream>
using namespace std;
int main(){
    int num,i=1,sum=0,avg;
    cout<<"Enter Three number within range of 0 to 100: "<<endl;
    while(i<=3){
        cout<<"Enter Your "<<i<<" number:"<<endl;
        cin>>num;
        sum=sum+num;
    }
    avg=sum/3;
    if(avg>=80){
        cout<<"You are above average"<<endl;
    }
    else
        cout<<"average marks are: "<<avg;

    return 0;
}
