#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum=0;
    cin>>n;
    int *x=new int[n];
    for(int i=0;i<n;i++)
        cin>>x[i];



    cout<<"\n";
    for(int i=0;i<n;i++)
        sum+=x[i];
    cout<<sum<<"\n";
    delete[] x;

}
