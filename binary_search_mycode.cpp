#include<bits/stdc++.h>
using namespace std;

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
   /// sort(a.begin(),a.end());


    int low=0,high=n-1;
    int here=0;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(a[mid]==k)
        {
            cout<<"Yes the number "<<k<<" has been found in index: "<<mid;
            here=1;
            break;
        }
        else if(a[mid]<k)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    if(here==0){
    cout<<"No, the number isn't in the array";
    }


    return 0;
}

/*
n sorted array

k

8 13
1 3 5 7 11 12 13 14

10 10
2 4 6 7 8 9 10 11 14 18

3 1
1 2 3

n unsorted
10 10
14 2 4 18 6 11 9 10 7 8
*/
