/*
Input SLimit and ELimit from user, and display Even numbers between range, with both limits included
 Give an efficient solution that does not check divisibility of each number in the given range
*/
#include <iostream>
#include <conio.h>
using namespace std;
//function declaration
int main(){
    int upper, lower, even,check;
    cout<<"Enter Lower limit"<<endl;
    cin>>lower;
    cout<<"Enter Upper limit"<<endl;
    cin>>upper;
    if(lower<upper){
      //  check = upper - lower;
        if(lower%2==0){
            while(lower< upper){
                 lower= lower+2;
                cout<<lower<<endl;

            }

        }
        else{
            lower= lower+1;
            while(lower< upper){

                cout<<lower<<endl;
            lower= lower+2;

            }
        }

    }
    else
        cout<<"lower limit can't be greator than upper limit, try again";
}
