// selection sort is a simple comparison-based sorting algorithm that works by repeatedly
// selecting the smallest (or largest) element from the unsorted part and placing it at the beginning.

// steps to follow
/*
    1. find the smallest element in the array
    2. swap it with the first element.alignas
    3. move to the next position and repeat the process for the 
*/
#include <iostream>
using namespace std;

void swap (int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n -1; i++)
    {
        int minIndex = i;
        for (int j = i+1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]); // swap with the first element
    }
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
        cout << endl;
    }
}

int main(){

    int arr[] = {64,25,13,43,22,11};

    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr,n);
    printArray(arr,n);


    return 0;
}