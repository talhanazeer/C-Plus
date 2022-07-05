#include<iostream>
using namespace std;
    int main(){
    	int n, s1, s2, z;
    	 int nums[2];
        cout<<" How many Integer numbers : ";
        cin>>n;
       
        z=n;
        for(int i=0; i<n;i++){
        	cout<<"out"<<endl;
            cout<<"Enter the First number: ";
            cin>>nums[i];
           for(;n>1;n--){
                   	cout<<" Enter the next number : ";
                   	cin>>nums[i+1];
                   	if(nums[i]>nums[i+1])
                   	nums[i]=nums[i+1];
                   	cout<<"in"<<endl;
                   
            }

        }
    	cout<<"Smallest of "<<z<<" integers is: "<<nums[0]<<endl;
    	for(int i=0;i<n;i++){
    		cout<<nums[i]<<endl;
    		cout<<nums<<endl;
		}
    	return 0;
    }
  
