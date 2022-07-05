#include <iostream>
using namespace std;
int* reverseArray(int *, int);
int main()
{
 const int SIZE = 10;
int arr[SIZE] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
cout << "Beginning array:\n";
for(int i = 0; i < SIZE; i++)
cout << *(arr + i) << " ";
int *revArr = reverseArray(arr, SIZE);
cout << "\n\nReversed array:\n";
for(int i = 0; i < SIZE; i++)
cout << *(revArr + i) << " ";
cout << endl;
delete [] revArr;
return 0;
}

int* reverseArray(int *arr, int SIZE){
int *ptr = new int[SIZE];
for(int i = 0; i < SIZE; i++){
*(ptr + SIZE - 1 - i) = *(arr + i);
}
return ptr;
}


