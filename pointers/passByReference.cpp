#include<iostream>
using namespace std;

void changeValue(int &a ){ // this is not the address this time, instead it's the alias of the variable b
    
    a = 20;
}
int main(){
    int b = 10;
    changeValue(b);
    cout << b << endl;
    return 0;
}