#include<bits/stdc++.h>
using namespace std;

int sum_a(vector<int>a,int n)
{
   if(n<=0)
   return 0;

   return sum_a(a,n-1)+a[n-1];
}

int main ()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    int array_sum=sum_a(a,n);
    cout<<array_sum;
}


