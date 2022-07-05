#include<iostream>
#include<iomanip>
#include <cstdlib>
#include <cstdio>
#include <ctime>
using namespace std;
int main () {
  	double a = 30;
 	 double b = 10000.0;
  	double pi = 3.041633333333;
  int v;
  	cout <<setw(30)<<setprecision(5)<<showpoint <<internal<<a << '\t'<<setw(30) << b << '\t'<<setw(30) << pi << '\n';
	cout.precision (10);
	cout <<noshowpoint << a << '\t' << b << '\t' << pi << '\n';
	cout<<right<<setbase(16)<<100<<endl;
	srand((unsigned) time(0));
	v= rand()%15;
	cout<<v;

  

	
	
	
  return 0;
}

