#include <iostream>
using namespace std;
int main()
{
	float f=2.5;
	float t=8.9;
	float *ptrf= NULL;
	float *ptrt= NULL;
	ptrf=&f;
	ptrt=&t;
	cout<<"the address of f is"<<"  "<<&f<<"the value of f is"<<f<<endl;
	cout<<"the address of ptrf is"<<"  "<<ptrf<<"the value of ptrf varaible is"<<"   "<<*ptrf<<endl;
	cout<<"the value of memory location of ptrf is"<<&f<<endl;
	cout<<"the address of t is"<<"  "<<&t<<"the value of t is"<<t<<endl;
	cout<<"the address of ptrt is"<<"  "<<ptrt<<"the value of ptrt varaible is"<<"  "<<*ptrt<<endl;
	cout<<"the value of memory location of ptrt is"<<&t<<endl;
	return 0;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
