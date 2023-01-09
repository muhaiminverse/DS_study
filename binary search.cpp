#include<bits/stdc++.h>
using namespace std;

//time complexity = nlogn>> very low


int main()
{
    int n,k;
    int flag=0;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int low=0, high=n-1;
    while(low<=high)
    {
        int mid = (low+high)/2;
        cout<<"Low = " <<low<<" mid = "<<mid<<" High = "<<high<<"\n";
        if(a[mid]==k)
        {
            cout<<"YES "<<mid<<"\n";
            flag=1;
        }
        if(a[mid]>k)
        {
            high = mid -1;
        }
        else
        {
            low = mid+1;
        }
    }
    if(flag==0)
    cout<<"NO "<<"\n";
    return 0;
}
/*
n sorted array

k

10 10
2 4 6 7 8 9 10 11 14 18

3 1
1 2 3
*/
