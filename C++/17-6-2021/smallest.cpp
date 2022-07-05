#include<iostream>
using namespace std;
    int main(){
    	int n, s1, s2, z;
        cout<<" How many Integer numbers : ";
        cin>>n;
        z=n;
        while(n>0){
            cout<<"Enter the First number: ";
            cin>>s1;
            n--;
           while(n>=1){
                   	cout<<" Enter the next number : ";
                   	cin>>s2;
                   	if(s1>s2)
                   	s1=s2;
                   	n--;
            }

        }
    	cout<<"Smallest of "<<z<<" integers is: "<<s1;;
    	return(0);
    }
