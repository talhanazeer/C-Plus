#include<iostream>
using namespace std;
int getSmaller(int A ,int B, int C){
    if(A<B && A<C){
            cout<<"Smallest is: "<<A<<endl;
    }
   else if(B<A && B<C){
            cout<<"Smallest is: "<<B<<endl;
    }
   else if(C<A && C<B){
            cout<<"Smallest is: "<<C<<endl;
    }
    else{
        cout<<"Smaller is: "<<A<<endl;
    }

}
int main(){
    int A,B,C;
    cout<<"Enter Your First Num: "<<endl;
    cin>>A;
    cout<<"Enter Your Second Num: "<<endl;
    cin>>B;
    cout<<"Enter Your Third Num: "<<endl;
    cin>>C;
    getSmaller(A,B,C);

    return 0;}
