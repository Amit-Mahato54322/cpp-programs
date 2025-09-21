#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
using namespace std;

class Array {
private:
    int* data;
    int capacity;
    int size;

public:
    // Constructor
    Array(int maxSize = 10);
    
    // Destructor
    ~Array();
    
    // Basic methods
    bool insert(int value, int position);
    bool deleteElement(int position);
    void display() const;
    bool isEmpty() const;
    bool isFull() const;
    int getSize() const;
    int getCapacity() const;
    int getValue(int position) const;
    
    // New methods to implement
    bool insertFirst(int newValue);
    bool insertLast(int newValue);
    bool deleteFirst();
    bool deleteLast();
    int find(int value, int position);
    int findReverse(int value);
    int findReverse(int value, int position);
};

#endif
