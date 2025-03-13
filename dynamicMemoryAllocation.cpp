#include<iostream>
using namespace std;

int main()
{
    int *arr = new int[5];  // dynamically allocate an array of 5 integers

    // assign values to the array
    for (int i = 0; i < 5; i++)
    {
        arr[i] = i*2;
    }
    // output the values of the array
    for (int i = 0; i < 5; i++)
    {
        cout << " arr[" <<i << "] =" << arr[i]<< endl;

    }

    delete[]arr;    // free the memory ( deallocated )for the array
    arr = nullptr;  // set pointer to the nullptr for safety

    return 0;
}