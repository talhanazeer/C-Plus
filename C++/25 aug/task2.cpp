#include <iostream>
using namespace std;
int main()
{
	int size=10;
	int x[size],y[size],z[size];
	cout<<"enetr the value of 1st array:"<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<"enetr the value of"<<i+1<<"  "<<endl;
  		cin>>*(x+i);
	}
	cout<<"enter the value of 2nd array:"<<endl;
	for(int j=0;j<size;j++)
	{
		cout<<"enetr the value of"<<j+1<<"  "<<endl;
		cin>>*(y+j);
	}
	cout<<"ans is:"<<endl;
	for(int k=0;k<size;k++)
	{
		*(z+k)=*(x+k)-*(y+k);
	}
	for(int b=0;b<size;b++)
	{
		cout<<*(z+b)<<"  ";
	}
	return 0;
	
	
	
	
	
	
}

