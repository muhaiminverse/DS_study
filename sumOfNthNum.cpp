#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];

    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
        cout<<sum<<" ";
    }

  /*
12
0 8 7 6 1 2 4 -3 -1 11 0 5
  */
}
