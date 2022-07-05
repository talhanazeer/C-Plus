#include <iostream>
using namespace std;
void fac(int n)
{
	int n, fact=1;
	for(int i=1;i<=n;i++)
	{
	fact*=i;

}
	cout<<fact;
	
}
int main()
{
	int n;
	cout<<"enetr  anumber"<<endl;
	cin>>n;
	fac(n);
	return 0;
}
