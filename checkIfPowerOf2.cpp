
// to check whether the number is the power of 2 or not

// example: 4, 8 16   ---- 2 pow 2 2 pow 3

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int iNumber;
    cout << "Enter a number:- " ;
    cin >> iNumber;
    int count = 0;
    for (int i = 0; i < iNumber; i++)
    {
        if ( pow(2,i) == iNumber){
            count++;
        }
    }
    if (count >= 1){
        cout << "Yes it is a power of 2" << endl;
        
    }else cout << "Not it is not" << endl;
}