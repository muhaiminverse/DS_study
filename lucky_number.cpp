#include<bits/stdc++.h>
using namespace std;


int main()
{


    long long int n;
    cin>>n;
    int i=0,Count=0,last_number=0;

    while(n!=0 )
    {
        last_number = n % 10;
        if(last_number==7 ||last_number==4)
        {
            Count++;
        }
        n/=10;

    }
    if(Count==4||Count==7)
        cout<<"YES";
    else
        cout<<"NO";





}

