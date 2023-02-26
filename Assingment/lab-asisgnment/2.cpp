#include<bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node * next;
    node * prv;
};

class LinkedList
{
public:
    node *head;
    int sz;
    LinkedList()
    {
        head = NULL;

    }

///create newnode
    node * CreateNewNode(int value)
    {
        node *newnode = new node;
        newnode->data = value;
        newnode->next = NULL;
        newnode->prv = NULL;
        return newnode;
    }
///insertHead
    void insertHead(int value)
    {
        sz++;
        node *newnode = CreateNewNode(value);
        if(head == NULL)
        {
            head = newnode;
            return;
        }
        node *a = head;
        newnode->next = a;
        a->prv = newnode;
        head = newnode;
    }

///insertTail
    void insertAtTail(int valuee)
    {
        sz++;
        node *newnode = CreateNewNode(valuee);
        node *a = head;

        //traversing
        while(a->next!=NULL)
        {
            a = a->next;
        }
        a->next = newnode;
        newnode->prv=a;
        head=head;
    }

///finding the middle and insert

    void insertAtMid(int valuee)
    {
        sz++;
        node *newnode = CreateNewNode(valuee);

        ///traversing for the middle node
        int mid = (sz+1)/2;
        int indexx=1;
        node *a = head;

        while(indexx<mid)
        {
            a =a->next;
            indexx++;
        }

        ///push the node
        newnode->next=a->next;
        a->next = newnode;
        a->prv=head;
        newnode->prv=a;



    }

///print the list
    void print()
    {
        node *a = head;
        while(a!=NULL)
        {
            cout<<a->data<<" ";
            a = a->next;
        }
        cout<<endl;
    }

};


int main()
{
    LinkedList a;
    a.insertHead(10);
    a.print();

    a.insertAtTail(70);
    a.print();

    a.insertAtMid(321);
    a.print();


    return 0;
}
