#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void insertEnd(Node*& front, Node*& rear, int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = NULL;

    if (front == NULL) {
        front = newNode;
        rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }
}

void deleteValue(Node*& front, Node*& rear, int value) {
    Node* temp = front;
    Node* prev = NULL;

    while (temp != NULL) {
        if (temp->data == value) {
            if (prev == NULL) {
                front = temp->next;
            } else {
                prev->next = temp->next;
            }

            if (temp == rear) {
                rear = prev;
            }

            delete temp;
            return;
        }

        prev = temp;
        temp = temp->next;
    }
}

void forwardPrint(Node* front) {
    Node* temp = front;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

void reversePrint(Node* front) {
    if (front == NULL) {
        return;
    }

    reversePrint(front->next);
    cout << front->data << " ";
}

int main() {
    Node* front = NULL;
    Node* rear = NULL;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int value;
        cin >> value;
        insertEnd(front, rear, value);
    }

    int value;
    cin >> value;

    deleteValue(front, rear, value);

    forwardPrint(front);

    reversePrint(front);
    cout << endl;

    return 0;
}