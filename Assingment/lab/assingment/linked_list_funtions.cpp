#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int data; //node
    node * next; //pointer variable
};

class LinkedList{
public:
    node * head; //pointer variable

    LinkedList()
    {
        head= NULL;
    }

    /
    node* CreateNewNode(int value)
    {
       node *newnode= new node;
       newnode->data = value;
       newnode->next = NULL;
       return newnode;
    }


    void headCreate(int value)
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


    ///Prints the linked list
    void Traverse()
    {
        node* a = head;
        while(a!=NULL)
        {
            cout<<a->data<<" ";
            a= a->next;
        }
        cout<<"\n";
    }

    ///Search for a single value
    int getValue(int value)
    {
        int index=0;
        node* a = head;
        while(a!=NULL)
        {
            if(a->data==value)
                {
                    return index;
                }
            a= a->next;
            index++;
        }
        return -1;
    }

    ///search all possible occurrence
    int SearchAllValue(int value)
    {
int index=0;
        node* a = head;
        while(a!=NULL)
        {
            if(a->data==value)
                {
                    cout<<value<<" is found at index "<<index<<"\n";
                }
            a= a->next;
            index++;
        }
        return -1;
    }

int getSize()
{

}

void printReverse()
{

}
void swapFirst()
{

}

};

int main()
{

      LinkedList l;
    cout<<l.getSize()<<"\n";
    l.InsertAtHead(5);
    cout<<l.getSize()<<"\n";
    l.InsertAtHead(6);
    l.InsertAtHead(30);
    cout<<l.getSize()<<"\n";
    l.InsertAtHead(20);
    l.InsertAtHead(30);

    cout<<l.getValue(2)<<"\n";

    cout<<l.getValue(6)<<"\n";

    l.printReverse();
    l.Traverse();
    l.swapFirst();
    l.Traverse();
    l.printReverse();


    return 0;
}
