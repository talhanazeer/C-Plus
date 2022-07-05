#include<iostream>
using namespace std;
int foo(int num){
    return num;
}
int main(){
    int num;
    for(int i=5; i>0; i--){
            if(foo(i--)){
                cout<<"Value is: "<<i<<endl;
            }

    }
}
