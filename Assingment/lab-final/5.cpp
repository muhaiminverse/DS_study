#include <bits/stdc++.h>
using namespace std;

const int MAX_SIZE = 100;

class queuee
{
public:
    int start,endd,sz,a[MAX_SIZE];


    queuee()
    {
        start = 0;
        endd= -1;
        sz = 0;
    }

    void enqueue(int value)
    {
        if(sz == MAX_SIZE)
        {
            cout<<"Full"<<endl;
            return;
        }
        endd++;
        if(endd == MAX_SIZE)
        {
            endd = 0;
        }
        a[endd] = value;
        sz++;
    }

    void dequeue()
    {
        if(sz == 0)
        {
            cout<<"Empty"<<endl;
            return;
        }
        start++;
        if(start==MAX_SIZE)
        {
            start = 0;
        }
        sz--;
    }

    int front()
    {
        if(sz == 0)
        {
            cout<<"Empty"<<endl;
            return -1;
        }
        return a[start];
    }

};

int main()
{
    queuee q;
    q.enqueue(153);
    q.enqueue(55);
    q.enqueue(483);


    cout<<q.front()<<endl;
    q.dequeue();
    cout<<q.front()<<endl;
    q.dequeue();
    cout<<q.front()<<endl;

    cout<<endl;
    cout<<q.front()<<endl;
    q.dequeue();
    cout<<q.front()<<endl;

    return 0;
}
