#include "arrayList.h"

// Constructor
Array::Array(int maxSize) {
    capacity = maxSize;
    size = 0;
    data = new int[capacity];
}

// Destructor
Array::~Array() {
    delete[] data;
}

// Basic insert method - inserts value at given position
bool Array::insert(int value, int position) {
    if (isFull()) {
        cout << "Array is full. Cannot insert." << endl;
        return false;
    }
    
    if (position < 0 || position > size) {
        cout << "Invalid position. Position should be between 0 and " << size << endl;
        return false;
    }
    
    // Shift elements to the right
    for (int i = size; i > position; i--) {
        data[i] = data[i - 1];
    }
    
    data[position] = value;
    size++;
    return true;
}

// Basic delete method - deletes element at given position
bool Array::deleteElement(int position) {
    if (isEmpty()) {
        cout << "Array is empty. Cannot delete." << endl;
        return false;
    }
    
    if (position < 0 || position >= size) {
        cout << "Invalid position. Position should be between 0 and " << (size - 1) << endl;
        return false;
    }
    
    // Shift elements to the left
    for (int i = position; i < size - 1; i++) {
        data[i] = data[i + 1];
    }
    
    size--;
    return true;
}

// Display all elements
void Array::display() const {
    if (isEmpty()) {
        cout << "Array is empty." << endl;
        return;
    }
    
    cout << "Array elements: ";
    for (int i = 0; i < size; i++) {
        cout << data[i] << " ";
    }
    cout << endl;
}

// Check if array is empty
bool Array::isEmpty() const {
    return size == 0;
}

// Check if array is full
bool Array::isFull() const {
    return size == capacity;
}

// Get current size
int Array::getSize() const {
    return size;
}

// Get capacity
int Array::getCapacity() const {
    return capacity;
}

// Get value at given position
int Array::getValue(int position) const {
    if (position < 0 || position >= size) {
        cout << "Invalid position." << endl;
        return -1; // Return -1 for invalid position
    }
    return data[position];
}

// NEW METHODS IMPLEMENTATION

// Insert at first position (index 0)
bool Array::insertFirst(int newValue) {
    return insert(newValue, 0);
}

// Insert at last position
bool Array::insertLast(int newValue) {
    return insert(newValue, size);
}

// Delete first element
bool Array::deleteFirst() {
    return deleteElement(0);
}

// Delete last element
bool Array::deleteLast() {
    return deleteElement(size - 1);
}

// Find value starting from given position, moving right
int Array::find(int value, int position) {
    // Validate position
    if (position < 0 || position >= size) {
        cout << "Invalid position for search." << endl;
        return -1;
    }
    
    // Search from position to the right
    for (int i = position; i < size; i++) {
        if (data[i] == value) {
            return i;
        }
    }
    
    return -1; // Not found
}

// Find value starting from last position, moving left
int Array::findReverse(int value) {
    if (isEmpty()) {
        return -1;
    }
    
    // Search from last position to the left
    for (int i = size - 1; i >= 0; i--) {
        if (data[i] == value) {
            return i;
        }
    }
    
    return -1; // Not found
}

// Find value starting from given position, moving left
int Array::findReverse(int value, int position) {
    // Validate position
    if (position < 0 || position >= size) {
        cout << "Invalid position for reverse search." << endl;
        return -1;
    }
    
    // Search from position to the left
    for (int i = position; i >= 0; i--) {
        if (data[i] == value) {
            return i;
        }
    }
    
    return -1; // Not found
}
