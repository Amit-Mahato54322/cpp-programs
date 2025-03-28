/*
pointers are special variables that store address of another variable
int *ptr = &a;

we can also make a pointer to pointer variable, which will store the memory address of another pointer 
int ** ptr2 = &ptr

Dereferencing operator
* value at address 
*/

#include <iostream>
#include<vector> 
using namespace std;
int main(){
    int a = 12;
    int *ptr = &a;
    int **ptr2 = & ptr;
    cout << ptr << endl;
    cout << ptr2 << endl;
    
    // we can also use * as a dereferencing operator
    cout << *ptr << endl;
    cout << *ptr2 << endl;
    cout << **ptr2 << endl;

    return 0;
}