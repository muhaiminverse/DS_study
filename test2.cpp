#include<bits/stdc++.h>
using namespace std;

int MissingNo(vector<int> a, int n)
{
    int i, total;
    total = (n + 1) * (n + 2) / 2;
    for (i = 0; i < n-1; i++)
        total -= a[i];
    return total;
}
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n-1;i++)
        cin>>a[i];

int missing = MissingNo(a,n);
        cout<<missing<<" ";


    return 0;
}
