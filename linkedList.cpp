/*
a linked list is a data structure that allows dynamic allocation of memory. It has no fixed size and can efficiently accomodate insertion or deletion. 

head points to the first element or the first node. The individual element is called a node. 
each element of a linked list is called a node and it has two major components: 
1. data -- holds the data or the value that the node represents 
2. Next pointer -- a reference or pointer to the next node in the sequence. 



*/

#include <iostream>
using namespace std;

// implementing a linked list using a struct. 
struct Node{
    int iValue; // data to be stored in the node. 
    Node *pNext;  // pointer to the next node/ self referential pointer 
    
};

// we will declare few functions 
//append a node(insert at the end)
// insert at the beginning 
// delete a node by value
// display the list 
// free memory (delete all the nodes )

// function to append ( insert at the end )
void append (Node *& head, int value){
    Node * newNode = new Node();
    newNode->data = value;
    newNode->next = nullptr;
}


int main(){
    return 0;
}