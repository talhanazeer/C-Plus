#include <iostream>
using namespace std;

int findMode(int [],  int); 

int main()
{
    const int SIZE = 10;
    int numbers[SIZE] = { 1, 2, 3, 4, 5, 7, 7, 8 ,7, 10};

    int mode = findMode(numbers, SIZE);

    cout << "\nMode = " << mode << endl;

    return 0;
}
int findMode(int array[], const int SIZE)
{
    int max= 0,
        maxrepeat = 0,
        i, j;
    
    for (i = 0; i < SIZE; i++)
    {
        int repeat = 0;

        for (j = 0; j < SIZE; j++)
        {
            if (*(array + j) == *(array + i)) 
                repeat++;
        }

        if (repeat > maxrepeat)
        {
            maxrepeat = repeat;
            max= *(array + i); // array[i]
        }
        else if (maxrepeat == 1)
            max= -1;
    }

    return max;
}
