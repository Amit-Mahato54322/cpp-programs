// let's learn about null pointers
// a pointer that doesn't point to any location
#include<iostream>
using namespace std;
int main(){
    int a = 5;
    int *p = &a; 
    int **q = &p;
    cout << *p << endl;
    cout << **q << endl;
    cout << p << endl;
    cout << *q << endl;

    return 0;
}