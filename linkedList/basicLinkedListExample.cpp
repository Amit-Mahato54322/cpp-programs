/*
    steps to create a linked list
    1. create a struct with int data and a self pointer to point to next node
    2. create dynamic nodes 
    3. add data to those dynamic nodes
    4. traverse and print 
    5. delete the dynamic variables to free up the memories. 
*/
#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};
int main(){
    // create some dynamic nodes
    Node * head = new Node();
    Node * second = new Node();
    Node * third = new Node();

    // assign values to each nodes
    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = nullptr;

    // traverse each node to print the values 
    Node * temp = head;
    while (temp!=nullptr){
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "nullptr";

    // free up the memories because we have dynamically allocated them. 
    temp = head;
    while (temp != nullptr){
        Node * nextNode = temp->next;   //store next node
        delete temp;            // delete the current node
        temp = nextNode;        // move to next
    }

    return 0;
}