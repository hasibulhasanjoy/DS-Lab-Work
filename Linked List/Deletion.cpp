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
void printLinkedList();
void deleteFromFirst();
void deleteFromAnIndex(int index);
int main()
{
    createLinkedList();
    printLinkedList();
    // deleteFromFirst();
    // printLinkedList();
    deleteFromAnIndex(2);
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
void deleteFromFirst()
{
    Node *ptr = head;
    head = second;
    free(ptr);
}

void deleteFromAnIndex(int index)
{
    Node *p = head;
    Node *q = head->next;
    for (int i = 0; i < index - 1; i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
}