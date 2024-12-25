#include <iostream>
using namespace std;

// Node class to represent each element in the linked list
class Node {
public:
    int data;  // Stores the data of the node
    Node* next;  // Points to the next node in the list

    // Constructor to initialize node with data
    Node(int value) {
        data = value;
        next = nullptr;
    }
};

// LinkedList class with basic CRUD operations
class LinkedList {
private:
    Node* head;  // Points to the first node in the list

public:
    // Constructor to initialize the list as empty
    LinkedList() {
        head = nullptr;
    }

    // Insert at beginning
    void insertAtBeginning(int value) {
        Node* newNode = new Node(value);  // Create a new node with given value
        newNode->next = head;  // Point the new node to the current head
        head = newNode;  // Update head to point to the new node
    }

    // Insert at end
    void insertAtEnd(int value) {
        Node* newNode = new Node(value);  // Create a new node
        if (!head) {  // If the list is empty, make the new node the head
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next) {  // Traverse to the last node
                temp = temp->next;
            }
            temp->next = newNode;  // Add the new node at the end
        }
    }

    // Insert at a specific position
    void insertAtPosition(int position, int value) {
        if (position < 0) return;  // Invalid position

        Node* newNode = new Node(value);
        if (position == 0) {  // Insert at the beginning
            newNode->next = head;
            head = newNode;
        } else {
            Node* temp = head;
            for (int i = 0; temp != nullptr && i < position - 1; i++) {
                temp = temp->next;  // Traverse the list
            }
            if (temp) {  // If we found the position
                newNode->next = temp->next;
                temp->next = newNode;  // Insert the new node at the given position
            }
        }
    }

    // Print the list
    void printList() {
        Node* temp = head;
        while (temp) {
            cout << temp->data << " ";  // Print the data of the current node
            temp = temp->next;  // Move to the next node
        }
        cout << endl;
    }

    // Update a node at a specific position
    void updateAtPosition(int position, int value) {
        Node* temp = head;
        for (int i = 0; temp != nullptr && i < position; i++) {
            temp = temp->next;  // Traverse to the desired position
        }
        if (temp) {
            temp->data = value;  // Update the data of the node
        }
    }

    // Delete from the beginning
    void deleteFromBeginning() {
        if (head) {
            Node* temp = head;
            head = head->next;  // Move head to the next node
            delete temp;  // Delete the old head node
        }
    }

    // Delete from the end
    void deleteFromEnd() {
        if (!head) return;  // If the list is empty, do nothing

        if (!head->next) {  // If there is only one node
            delete head;
            head = nullptr;
        } else {
            Node* temp = head;
            while (temp->next && temp->next->next) {  // Find the second-to-last node
                temp = temp->next;
            }
            delete temp->next;  // Delete the last node
            temp->next = nullptr;  // Set the second-to-last node's next to nullptr
        }
    }

    // Delete at a specific position
    void deleteAtPosition(int position) {
        if (position < 0 || !head) return;  // Invalid position or empty list

        if (position == 0) {  // If position is 0, delete the first node
            Node* temp = head;
            head = head->next;
            delete temp;
        } else {
            Node* temp = head;
            for (int i = 0; temp != nullptr && i < position - 1; i++) {
                temp = temp->next;  // Traverse to the node before the target
            }
            if (temp && temp->next) {  // If position is valid
                Node* nodeToDelete = temp->next;
                temp->next = temp->next->next;  // Remove the node from the list
                delete nodeToDelete;  // Delete the node
            }
        }
    }
};

int main() {
    LinkedList list;  // Create an empty linked list
    int choice, value, position;

    do {
        // Display menu to the user
        cout << "\n1. Insert at beginning\n";
        cout << "2. Insert at end\n";
        cout << "3. Insert at specific position\n";
        cout << "4. Print list\n";
        cout << "5. Update at position\n";
        cout << "6. Delete from beginning\n";
        cout << "7. Delete from end\n";
        cout << "8. Delete at specific position\n";
        cout << "9. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to insert at beginning: ";
                cin >> value;
                list.insertAtBeginning(value);
                break;
            case 2:
                cout << "Enter value to insert at end: ";
                cin >> value;
                list.insertAtEnd(value);
                break;
            case 3:
                cout << "Enter position to insert: ";
                cin >> position;
                cout << "Enter value to insert: ";
                cin >> value;
                list.insertAtPosition(position, value);
                break;
            case 4:
                list.printList();
                break;
            case 5:
                cout << "Enter position to update: ";
                cin >> position;
                cout << "Enter new value: ";
                cin >> value;
                list.updateAtPosition(position, value);
                break;
            case 6:
                list.deleteFromBeginning();
                break;
            case 7:
                list.deleteFromEnd();
                break;
            case 8:
                cout << "Enter position to delete: ";
                cin >> position;
                list.deleteAtPosition(position);
                break;
            case 9:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 9);

    return 0;
}
