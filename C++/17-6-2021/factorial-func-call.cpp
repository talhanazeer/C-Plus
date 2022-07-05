#include <iostream>
using namespace std;
void fac(int num)
{


	if(num>0){
            int fact=1;
        for(int i=1;i<=num;i++)
        {
            fact*=i;

        }
        cout<<fact<<endl;
	}
	else{
        cout<<"Enter Positive number"<<endl;
	}

}





int main()
{
int ans,num;
do{

	cout<<"Enter  a Number"<<endl;
	cin>>num;
    fac(num);
    cout<<"you want to continue? if yes press any key esle press -1:"<<endl;
    cin>>ans;

}while(ans != -1);
cout<<"End Function"<<endl;
	return 0;
}
