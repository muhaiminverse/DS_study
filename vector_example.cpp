#include<bits/stdc++.h>
using namespace std;

int main()
{

    vector<int>a;
    for(int i=0;i<10;i++)
        a.push_back(i);///auto insert elements

        a.insert(a.begin()+2,100);///inserts element
    for(int i=0;i<a.size();i++)
        cout<<a[i]<<" ";
        ///0 1 100 2 3 4 5 6 7 8 9

        cout<<"\n";
        a.erase(a.begin()); ///erases the element
    for(int i=0;i<a.size();i++)
        cout<<a[i]<<" ";
        ///1 100 2 3 4 5 6 7 8 9

    cout<<"\n";
        a.pop_back();///pops_back
    for(int i=0;i<a.size();i++)
        cout<<a[i]<<" ";
        ///1 100 2 3 4 5 6 7 8


    //vector<int>a;
    //a.resize(3);
}

