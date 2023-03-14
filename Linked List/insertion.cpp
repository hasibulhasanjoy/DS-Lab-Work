#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

Node *head = new Node;
Node *second = new Node;
Node *third = new Node;
Node *fourth = new Node;
Node *fifth = new Node;
void createLinkedList();
void insertAtFirst(int data);
void insetAtIndex(int index, int data);
void insertAfterAIndex(Node *previous, int data);
void insertAtLast(int data);
void printLinkedList();

int main()
{
    createLinkedList();
    printLinkedList();
    insertAtFirst(6);
    printLinkedList();
    insetAtIndex(2, 54);
    printLinkedList();
    insertAfterAIndex(second, 45);
    printLinkedList();
    insertAtLast(90);
    printLinkedList();
    return 0;
}

void createLinkedList()
{
    head->data = 7;
    head->next = second;
    second->data = 8;
    second->next = third;
    third->data = 9;
    third->next = fourth;
    fourth->data = 10;
    fourth->next = fifth;
    fifth->data = 11;
    fifth->next = NULL;
}

void printLinkedList()
{
    Node *ptr = head;
    int i = 0;
    while (ptr != NULL)
    {
        cout << "Element At " << i << " : " << ptr->data << endl;
        ptr = ptr->next;
        i++;
    }
    cout << "***End of List***" << endl;
}

void insertAtFirst(int data)
{
    Node *insert = new Node;
    insert->data = data;
    insert->next = head;
    head = insert;
}

void insetAtIndex(int index, int data)
{
    Node *ptr = new Node;
    ptr->data = data;
    Node *p = head;
    for (int i = 0; i < index; i++)
    {
        p = p->next;
    }
    ptr->next = p->next;
    p->next = ptr;
}

void insertAfterAIndex(Node *previous, int data)
{
    Node *ptr = new Node;
    ptr->data = data;
    ptr->next = previous->next;
    previous->next = ptr;
}

void insertAtLast(int data)
{
    Node *ptr = new Node;
    ptr->data = data;
    Node *q = head;
    while (q->next != NULL)
    {
        q = q->next;
    }
    q->next = ptr;
    ptr->next = NULL;
}