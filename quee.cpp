#include<bits/stdc++.h>
using namespace std;
const int max_size=500;


class queeue{
public:
int a[max_size];
int l,r;

queeue()
{
    l=0,r=-1;

}
//o(1)
void enqueeue(int val)
{
    if(r+1>=max_size)
    {
        cout<<"Queue is full"<<endl;
        return;
    }
    r++;
    a[r]=val;
}
//o(1)
void dequeeue()
{
    if(l>r)
    {
        cout<<"Queue is empty"<<endl;
        return;
    }
    l++;

}
int front()
    {
        if(l>r)
        {
            cout<<"Queue is empty\n";
            return -1;
        }
        return a[l];
    }
    //O(1)
    int size()
    {
        return r-l+1;
    }

};

int main()
{

    queeue q;
    q.enqueeue(5);
    q.enqueeue(6);
    q.enqueeue(7);
    cout<<q.size()<<endl;

    cout<<q.front()<<endl;

    q.dequeeue();
    cout<<q.front()<<endl;
    q.dequeeue();
    cout<<q.front()<<endl;
    q.dequeeue();

    cout<<q.size()<<endl;

    return 0;
}
