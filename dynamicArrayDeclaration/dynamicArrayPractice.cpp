#include<iostream>
// using dynamic arrays
// first declare a pointer and then assign that pointer variable with a new <data type>[size of array]dy
using namespace std;
int main(){
    int numOfSprints;
    double* recordedTime;
    cout << "Enter the number of sprits: ";
    cin >> numOfSprints;
    recordedTime = new double[numOfSprints];

    for (int i = 0; i < numOfSprints; i++){
        cout << "Input: ";
        cin >> recordedTime[i];
    }
    cout << "output: " << endl;
    for (int i = 0; i < numOfSprints; i++){
        
        cout << recordedTime[i]<< " ";
    }
    delete[] recordedTime; // deallocating memory to prevent memory leaks

    return 0;
}