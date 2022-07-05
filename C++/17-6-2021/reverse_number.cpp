#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int num, reversed_num = 0, remainder,stored;

    cout << "Enter your  number: "<<endl;
    cin >> num;
    stored = num;

    while(num != 0) {
        remainder = num%10;
        reversed_num = reversed_num*10 + remainder;
        num /= 10;
    }

    cout <<stored<< " Is Reversed Into= " << reversed_num;

    return 0;
}

