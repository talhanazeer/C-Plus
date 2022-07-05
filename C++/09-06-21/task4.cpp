/*The monthly payment on a loan may be calculated by the following formula:
    	Payment = (((rate*(rate+1)^8)/((rate+1)-1)))
Rate is the monthly interest rate, which is the annual interest rate divided by 12. (12% annual interest would be 1 percent monthly
interest.) N is the number of payments and L is the amount of the loan.
Write a program that asks for these values and displays a report similar to
Loan Amount: 10000.00
Monthly Interest Rate: 1 (in %)
Number of Payments: 36
Monthly Payment: 332.14
Amount Paid Back: 11957.15
Interest Paid: 1957.15 (The answer to 2 decimal places that must be displayed with fixed-point notation)*/
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
	double L,R,N,i,j,k,l,m,p,q,s;
	cout<<"Enter Loan AMount: "<<endl;
	cin>>L;
	
	cout<<"Enter Rate: "<<endl;
	cin>>R;

	cout<<"Enter Number of Payment: "<<endl;
	cin>>N;
	//calculations
	i= R/100;
	j =i+1;
	k=pow(j,N);
	l=i*k;
	m = k-1;
	p = (l/m)*L;
	q=p*N;
	s=q-L;
	
	cout<<"Loan is: "<<fixed<<setprecision(2)<<L<<endl;
	cout<<"Rate is: "<<R <<endl;
	cout<<"Number of Payment: "<<fixed<<setprecision(2)<< N <<endl;
	cout<<"Payment is: "<<fixed<<setprecision(2)<< p <<endl;
	cout<<"PAid Back is: "<<fixed<<setprecision(2)<< q <<endl;
	cout<<"Intrest is: "<<fixed<<setprecision(2)<< s <<endl;
	return 0;
	
	
}
