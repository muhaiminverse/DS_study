#include<bits/stdc++.h>
using namespace std;
vector<int>Input_arr()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0; i<n; i++)
        cin>>a[i];
    return a;
}

bool set_sort(vector<int>a,vector<int>b)
{
    int len=0;
    if(a.size()>b.size())
    {
        len=a.size();
    }
    else
        len=b.size();

    vector<int>seted_a;
    int i=0;
    int j=0;
    int Count=0;

    for(int k=0; k<=len; k++)
    {
        if(a[i]==b[j])
        {
            Count++;
            i++;
            j=0;

        cout<<"idx1: "<<i<<" idx2: "<<j<<" Count:"<<Count<<"\n";
        }
        else
        {
            j++;
            cout<<"idx2: "<<j<<"\n";
        }
    }

}


int main()
{


    vector<int>a=Input_arr();
    vector<int>b=Input_arr();
    int Counted_set=set_sort(a,b);

    if(Counted_set==a.size())
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
/*
3
7 2 3
5
7 6 3 2 1


3
1 2 3
3
3 2 1


*/
