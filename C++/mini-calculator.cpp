#include <iostream>
using namespace std;
int main(){
int a ,b,pressed, sum, difference , product, division;

cout<<"Enter Your First Number"<<endl;
cin>>a;
cout<<"Enter Your Second Number "<<endl;
cin>>b;
cout<<"For Sum Press 1 \n For Difference Press 2 \n For Product Press 3 \n For Division Press 4"<<endl;
cin>>pressed;
sum = a + b;
difference = a - b;
product = a*b;
division = a/b;
if(pressed == 1){
	cout<<"Sum of numbers is: "<<sum;
}
else if(pressed==2){
	cout<<"Difference of numbers is: "<<difference;
}
else if(pressed==3){
	cout<<"Product of numbers is: "<<product;
}
else if(pressed==4){
	cout<<"After division  of numbers we got: "<<division;
}
else
	cout<<"Input Valid Number";
return 0;
}
