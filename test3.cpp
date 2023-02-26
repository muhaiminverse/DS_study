#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int data; //node
    node *next; //pointer variable
};

class LinkedList{
public:
    node *head; //pointer variable

    LinkedList()
    {
        head= NULL;
    }

    ///Creates a new nod with data=value & next=NULL
    node *CreateNewNode(int value)
    {
       node *newnode= new node;
       newnode->data = value;
       newnode->next = NULL;
       return newnode;
    }

    ///Insert new value at head
    void InserAtHead(int value)
    {
        node *a= CreateNewNode(value);
    if(head==NULL)
    {
        head=a;
        return;
    }
    ///if head is not NULL
    a->next = head;
    head = a;
    }
}
int main()
{


}


