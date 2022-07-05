#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
	cout<<"\'Hello\'\"World\"\n";
	cout<<"Hello \t World\n";
	cout<<123.000f<<endl;
	cout<<10/3<<endl;
	cout<<2%4<<endl;
	cout<<1/2<<endl;
	cout<<pow(3.0,2.0)<<endl;
	cout<<setprecision(4)<< 1.12389f<<endl;
	cout<< sqrt(4.0)<<endl;
	int x = 1, y = 2, z = 3;
	z += y -= z *= x += y;
	cout<<"X= "<<x<<endl;
	cout<<"y= "<<y<<endl;
	cout<<"z= "<<z<<endl;
	cout<<typeid(z).name();
	return 0;

}


