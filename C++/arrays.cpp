// C++ Program to display marks of 5 students

#include <iostream>
using namespace std;

// declare function to display marks
// take a 1d array as parameter
void display(int age[5]) {
    cout << "Displaying marks: " << endl;

    // display array elements
    for (int i = 0; i < 5; ++i) {
        cout << "Student " << i + 1 << ": " << age[i] << endl;
    }
}

int main() {

    // declare and initialize an array
    int m[5] = {88, 76, 90, 61, 69};

    // call display function
    // pass array as argument
    display(m);

    return 0;
}
