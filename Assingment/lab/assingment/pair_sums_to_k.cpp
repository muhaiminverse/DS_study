#include<bits/stdc++.h>
using namespace std;

//Time complexity O(n+1+n+1+n+1) = O(3n + 1) = O(3n) = O(c*n) = O(n)


int main()
{
    int n,k;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    cin>>k;


    int Count=0,i=0;

    while(i<n-1)
    {
        if(a[i]+a[i+1]==k)
        {
            Count++;
        }
        i++;
    }
    cout<<Count;




    return 0;
}

/*

5
6 1 3 2 4
5
ans->2

6
5 6 7 8 0 1
16
ans->0

7
54 52 56 51 53 50
and->55

*/


