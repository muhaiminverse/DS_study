#include<bits/stdc++.h>
using namespace std;
//structure of node
class node()
{
public:
    int data;
    node *next;
};
//node list
class LinkedList{
public:
    node *head;

    LinkedList()
    {
        head=NULL;
    }

    node* CreateNewNode(int value){
        node *newnode = new node;//create new node with allocating its memory
        newnode->data = value;
        newnode->next = NULL;
        return newnode;
    }
    void insertAtHead(int value)
    {
        node *a=CreateNewNode(value);
        if(head==NULL)
        {
            head->
        }
    }
    void traverse()
    {

    }
    void searchDistinctValue()
    {

    }
    void searchAllValue()
    {

    }

};


int main()
{
    LinkedList l;

    l.insertAtHead(10);
    l.insertAtHead(30);
    l.insertAtHead(20);
    l.insertAtHead(30);

    l.traverse();
    return 0;
}
