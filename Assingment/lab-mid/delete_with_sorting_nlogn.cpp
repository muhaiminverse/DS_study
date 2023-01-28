#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i=0; i<n; i++)
        cin>>a[i];
    //using set to remove duplicates
    set<int>s;
    for (int i=0; i<n; i++)
        s.insert(a[i]);
    //copy to array
    int idx=0;
    for (int k:s)
        a[idx++]=k;
    //sort
    sort(a,a+idx);

    for (int i=0; i<idx; i++)
        cout<<a[i]<<" ";
    return 0;
}

/*
5
6  3  2  3  5


ans->
2 3 5 6
*/
