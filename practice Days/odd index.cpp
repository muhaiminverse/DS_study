#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,multi=1;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];

    for(int i=1;i<n;i+=2)
        multi*=a[i];

        cout<<multi<<" ";
   /*
6
5 6 7 8 0 0

   */
}
