#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node *next;

    Node(int value){
        data=value;
        next=NULL;
    }

};


Node *head=NULL;



/*---------------------------------------------------------------------------
-----------------------------------------------------------------------------
--------------------------indert at front-----------------------------------
-----------------------------------------------------------------------------
-----------------------------------------------------------------------------*/

void insertend(int value){
    
         Node *newnode=new Node(value);

          if(head == NULL)
    {
        head = newnode;
    }
    else{
        while(temp->next != NULL){

            newnode->next =NULL;
            temp->next=newnode;

        }

    }
}



/*---------------------------------------------------------------------------
-----------------------------------------------------------------------------
--------------------------indert at end-------------------------------------
-----------------------------------------------------------------------------
-----------------------------------------------------------------------------*/
void insertend(int value){
    
         Node *newnode=new Node(value);

          if(head == NULL)
    {
        head = newnode;
    }
    else{
        while(temp->next != NULL){

            newnode->next =NULL;
            temp->next=newnode;

        }

    }
}


/*---------------------------------------------------------------------------
-----------------------------------------------------------------------------
--------------------------indert at spe.position-----------------------------
-----------------------------------------------------------------------------
-----------------------------------------------------------------------------*/


void insertpos( int value)
{
    Node *newnode = new Node(value);

    Node *temp = head;
    if(head == NULL)
    {
        head = newnode;
    }
  while(pos!=1){
    temp=temp->next;
    pos--;
  }

  newnode->next = temp->next;
  temp->next=newnode;

}


/*---------------------------------------------------------------------------
-----------------------------------------------------------------------------
--------------------------delete at frount-----------------------------------
-----------------------------------------------------------------------------
-----------------------------------------------------------------------------*/


void delete_At_front(int value)
{
    Node *temp = head;

    head = temp->next;
    free(temp);
}


/*---------------------------------------------------------------------------
-----------------------------------------------------------------------------
--------------------------Delete at enging-----------------------------------
-----------------------------------------------------------------------------
-----------------------------------------------------------------------------*/



void delete_AT_ending()
{
    // Empty list
    if(head == NULL)
    {
        return;
    }

    // Only one node
    if(head->next == NULL)
    {
        delete head;
        head = NULL;
        return;
    }

    Node *temp = head;

    // Go to second-last node
    while(temp->next->next != NULL)
    {
        temp = temp->next;
    }

    Node *last = temp->next;

    temp->next = NULL;

    delete last;
}

/*---------------------------------------------------------------------------
-----------------------------------------------------------------------------
--------------------------Delete at spe.position------------------------------
-----------------------------------------------------------------------------
-----------------------------------------------------------------------------*/

void delete_AT_pos(int pos)
{
    Node *ptr = head;

    pos--;

    while(pos != 1)
    {
        ptr = ptr->next;
        pos--;
    }

    Node *temp = ptr->next;

    ptr->next = temp->next;

    delete temp;
}




void display(Node *head)
{
    Node *temp = head;

    while(temp != NULL)
    {
        cout << temp->data;
        temp = temp->next;
    }
}


int main()
{

    Node *head = NULL;

     insertfront( 10);
    insertfront( 20);
    insertfront( 30);

    insertend( 70);
    insertend( 80);
    insertend( 90);


    delete_At_front(20);
    delete_At_front(30);

    
    delete_AT_ending();
    delete_AT_ending();


     delete_AT_pos(3);
    delete_AT_pos(2);
    display(head);

    return 0;
}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   