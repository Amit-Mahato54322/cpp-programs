#include<iostream>
#include <vector>
using namespace std;
int main(){
    
    // implementing a vector 
    vector<int> myVector;
    myVector.push_back(34);
    myVector.push_back(35);
    for (int i = 0; i<5; i++){
        cin >> myVector[i];
    }
    
    cout << "Output is below: "<< endl;
    for (int i = 0; i<5; i++){
        cout << myVector[i] << endl;
        
        
    }
    
    // we can use vector as a dynamic array but what if we have to insert some value in the middle of an array. ?
    // we'll have to shift the position of each and every elements afterwards and it's considered to be adrawback for a vector. 
    // hence a linked list comes into play
    
    
    
    return 0;
}




// let's implement a linked list in cpp 



















