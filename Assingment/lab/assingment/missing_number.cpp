#include<bits/stdc++.h>
using namespace std;

int sum1(vector<int> a, int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
        sum+=a[i];
    return sum;

}

int sum2(int firstN, int lastN)
{

    int sum=0;
    for(int i=firstN;i<=lastN;i++)
        sum+=i;
    return sum;

}

int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n-1;i++)
        cin>>a[i];


    sort(a.begin(),a.end());

    int sumwithout = sum1(a,n);
    int sumwith = sum2(a[1],a[n-1]);

    int mising_number = sumwith-sumwithout;
        cout<<mising_number<<" ";

    return 0;
}

/*

6
1 6 4 3 2
ans->5

5
1 2 5 4
ans->3

7
54 52 56 51 53 50
55

*/

