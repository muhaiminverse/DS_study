#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    for(int i=0; i<n; i++)
    {
        int last =n-1-i;
        bool sorted =true;
        for(int j=0; j<=last; j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
                sorted=false;
            }
        }
        if(sorted)
            break;

        cout<<"Pass"<<i<<": ";
        for(int i=0; i<n; i++)
            cout<<a[i]<<" ";
        cout<<"\n";


    }

    cout<<"After sorting\n";
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}

/*
7
5 3 1 4 2 6 1

7
3 5 1 4 2 6 1
*/
