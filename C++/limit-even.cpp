
/*
Input SLimit and ELimit from user, and display Even numbers between range, with both limits included
 Give an efficient solution that does not check divisibility of each number in the given range
*/
#include <iostream>
#include <conio.h>
using namespace std;
//function declaration
void displayEvenOdd(int num, int limit);
int main()
{
    int lowerLimit, upperLimit;
    cout<<"Enter your lower limit\n";
    cin>>lowerLimit;   //get input from user to lower limit
    cout<<"Enter your upper limit\n";
    cin>>upperLimit;    //get input from user to upper limit
    cout<<"Even/odd numbers from "<<lowerLimit<<" to "<<upperLimit<<endl;
    displayEvenOdd(lowerLimit, upperLimit);
     //function call with argument
    getch();
    return 0;
}
void displayEvenOdd(int num, int limit)//recursive function
{
    if(num>limit)
        return;
    cout<<num<<endl;
    displayEvenOdd(num + 2, limit);
}
