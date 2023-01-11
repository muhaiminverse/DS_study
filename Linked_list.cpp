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

    ///Creates a new nod with data=value & next=NULL
    node* CreateNewNode(int value)
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
    int SearchDistincValue(int value)
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
};

int main()
{

    LinkedList l;

    l.InserAtHead(10);
    l.InserAtHead(30);
    l.InserAtHead(20);
    l.InserAtHead(30);

    l.Traverse();

    cout<<"10 is found at "<<l.SearchDistincValue(10)<<"\n";

    cout<<"5 is found at "<<l.SearchDistincValue(5)<<"\n";
    cout<<"30 is found at "<<l.SearchDistincValue(30)<<"\n";

    l.SearchAllValue(30);

    return 0;
}
