#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=5;
    vector<int>d[n+1];
    for(int i=1 ; i<=n ; i++)
        for(int j=i ; j<=n ; j = j+i )
            d[j].push_back(i);

    for(int i=0; i<d.size(); i++)
        cout<<d[i];
    return 0;
}

