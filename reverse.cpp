#include <iostream>
using namespace std;

class node{

    public:
    int data;
    node* next;

    node(int val){
        data = val;
        next = NULL;
    }

};

class list{

    public:

    node* head;

    list(){
        head = NULL;
    }

    // insert at ending
    void insert(int val){

        node* newnode = new node(val);

        if(head == NULL){
            head = newnode;
            return;
        }

        node* temp = head;

        while(temp->next != NULL){
            temp = temp->next;
        }

        temp->next = newnode;
    }

    // display
    void display(){

        node* temp = head;

        while(temp != NULL){
            cout << temp->data << " -> ";
            temp = temp->next;
        }

        cout << "NULL" << endl;
    }

    // reverse linked list
    void reverse(){

        node* prev = NULL;
        node* current = head;
        node* nextnode;

        while(current != NULL){

            nextnode = current->next;

            current->next = prev;

            prev = current;

            current = nextnode;
        }

        head = prev;
    }

};


int main() {

    list l;

    l.insert(10);
    l.insert(20);
    l.insert(30);
    l.insert(40);

    cout << "Original List:" << endl;
    l.display();

    l.reverse();

    cout << "Reverse List:" << endl;
    l.display();

    return 0;
}