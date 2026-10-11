#include <iostream>
using namespace std;


struct node
{
    int data;
    node *prev;
    node *next;
};


node *head = NULL;

void insertbegin(int val)
{
    node *newnode = new node;

    newnode->data = val;
    newnode->prev = NULL;
    newnode->next = head;

    if (head != NULL)
    {
        head->prev = newnode;
    }

    head = newnode;
}

void insertend(int val)
{
    node *newnode = new node;

    newnode->data = val;
    newnode->next = NULL;

    if (head == NULL)
    {
        newnode->prev = NULL;
        head = newnode;
        return;
    }

    node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newnode;
    newnode->prev = temp;
}

void insertpos(int x, int y)
{
    node *temp = head;

    while (temp != NULL)
    {
        if (temp->data == x)
        {
            node *newnode = new node;

            newnode->data = y;
            newnode->prev = temp;
            newnode->next = temp->next;

            if (temp->next != NULL)
            {
                temp->next->prev = newnode;
            }

            temp->next = newnode;

            return;
        }

        temp = temp->next;
    }
}

void remove()
{
    if (head == NULL)
    {
        return;
    }

    node *temp = head;
    head = head->next;

    if (head != NULL)
    {
        head->prev = NULL;
    }

    delete temp;
}

void totalnumber()
{
    int count = 0;
    node *temp = head;

    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }

    cout << count << endl;
}

void disply()
{
    if (head == NULL)
    {
        cout << "EMPTY" << endl;
        return;
    }

    node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

int main()
{
    int op;
    cin >> op;

    for (int i = 0; i < op; i++)
    {
        string ch;
        cin >> ch;

        if (ch == "ADD_FRONT")
        {
            int val;
            cin >> val;
            insertbegin(val);
        }

        else if (ch == "ADD_END")
        {
            int val;
            cin >> val;
            insertend(val);
        }

        else if (ch == "INSERT_AFTER")
        {
            int x, y;
            cin >> x >> y;
            insertpos(x, y);
        }

        else if (ch == "REMOVE")
        {
            remove();
        }

        else if (ch == "COUNT")
        {
            totalnumber();
        }

        else if (ch == "DISPLAY")
        {
            disply();
        }
    }

    return 0;
}










