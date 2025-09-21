#include "arrayList.h"
#include <iostream>

using namespace std;

void displayMenu() {
    cout << "\n=== Array Operations Menu ===" << endl;
    cout << "1.  Insert at first position" << endl;
    cout << "2.  Insert at last position" << endl;
    cout << "3.  Insert at specific position" << endl;
    cout << "4.  Delete first element" << endl;
    cout << "5.  Delete last element" << endl;
    cout << "6.  Delete at specific position" << endl;
    cout << "7.  Find element (from position)" << endl;
    cout << "8.  Find element (reverse from end)" << endl;
    cout << "9.  Find element (reverse from position)" << endl;
    cout << "10. Display array" << endl;
    cout << "11. Display array info" << endl;
    cout << "12. Get value at position" << endl;
    cout << "0.  Exit" << endl;
    cout << "Enter your choice: ";
}

void displayArrayInfo(const Array& arr) {
    cout << "\nArray Info:" << endl;
    cout << "Size: " << arr.getSize() << endl;
    cout << "Capacity: " << arr.getCapacity() << endl;
    cout << "Is Empty: " << (arr.isEmpty() ? "Yes" : "No") << endl;
    cout << "Is Full: " << (arr.isFull() ? "Yes" : "No") << endl;
}

int main() {
    cout << "=== Interactive Array List Program ===" << endl;
    
    int capacity;
    cout << "Enter the capacity of the array: ";
    cin >> capacity;
    
    Array arr(capacity);
    int choice, value, position;
    
    do {
        displayMenu();
        cin >> choice;
        
        switch(choice) {
            case 1:
                cout << "Enter value to insert at first position: ";
                cin >> value;
                if (arr.insertFirst(value)) {
                    cout << "Value inserted successfully!" << endl;
                }
                break;
                
            case 2:
                cout << "Enter value to insert at last position: ";
                cin >> value;
                if (arr.insertLast(value)) {
                    cout << "Value inserted successfully!" << endl;
                }
                break;
                
            case 3:
                cout << "Enter value to insert: ";
                cin >> value;
                cout << "Enter position (0 to " << arr.getSize() << "): ";
                cin >> position;
                if (arr.insert(value, position)) {
                    cout << "Value inserted successfully!" << endl;
                }
                break;
                
            case 4:
                if (arr.deleteFirst()) {
                    cout << "First element deleted successfully!" << endl;
                }
                break;
                
            case 5:
                if (arr.deleteLast()) {
                    cout << "Last element deleted successfully!" << endl;
                }
                break;
                
            case 6:
                if (arr.isEmpty()) {
                    cout << "Array is empty!" << endl;
                } else {
                    cout << "Enter position to delete (0 to " << (arr.getSize()-1) << "): ";
                    cin >> position;
                    if (arr.deleteElement(position)) {
                        cout << "Element deleted successfully!" << endl;
                    }
                }
                break;
                
            case 7:
                cout << "Enter value to find: ";
                cin >> value;
                if (arr.isEmpty()) {
                    cout << "Array is empty!" << endl;
                } else {
                    cout << "Enter starting position (0 to " << (arr.getSize()-1) << "): ";
                    cin >> position;
                    int result = arr.find(value, position);
                    if (result != -1) {
                        cout << "Value " << value << " found at position: " << result << endl;
                    } else {
                        cout << "Value " << value << " not found!" << endl;
                    }
                }
                break;
                
            case 8:
                cout << "Enter value to find (reverse search from end): ";
                cin >> value;
                {
                    int result = arr.findReverse(value);
                    if (result != -1) {
                        cout << "Value " << value << " found at position: " << result << endl;
                    } else {
                        cout << "Value " << value << " not found!" << endl;
                    }
                }
                break;
                
            case 9:
                cout << "Enter value to find: ";
                cin >> value;
                if (arr.isEmpty()) {
                    cout << "Array is empty!" << endl;
                } else {
                    cout << "Enter starting position for reverse search (0 to " << (arr.getSize()-1) << "): ";
                    cin >> position;
                    int result = arr.findReverse(value, position);
                    if (result != -1) {
                        cout << "Value " << value << " found at position: " << result << endl;
                    } else {
                        cout << "Value " << value << " not found!" << endl;
                    }
                }
                break;
                
            case 10:
                arr.display();
                break;
                
            case 11:
                displayArrayInfo(arr);
                break;
                
            case 12:
                if (arr.isEmpty()) {
                    cout << "Array is empty!" << endl;
                } else {
                    cout << "Enter position (0 to " << (arr.getSize()-1) << "): ";
                    cin >> position;
                    int val = arr.getValue(position);
                    if (val != -1) {
                        cout << "Value at position " << position << ": " << val << endl;
                    }
                }
                break;
                
            case 0:
                cout << "Exiting program. Goodbye!" << endl;
                break;
                
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
        
    } while(choice != 0);
    
    return 0;
}
