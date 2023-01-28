#include<bits/stdc++.h>
using namespace std;

int ismax(int a[],int n)
{
    int max;
    if (n == 1)
        return a[0];

    max = ismax(a, n - 1);

    if (a[n-1] > max)
        return a[n-1];
    else
        return max;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    int mx = ismax(a,n);
    cout<<mx<<endl;

    return 0;
}
