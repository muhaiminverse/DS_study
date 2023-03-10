#include<bits/stdc++.h>
using namespace std;

vector<int>quick_sort(vector<int>&a)
{
    //base case
    if(a.size()<=1)
    {
        return a;
    }
    //pivot element + divide
    int pivot =a.size()-1;
    vector<int>b,c;
    for(int i=0; i<a.size(); i++)
    {
        if(i==pivot)
            continue;

        if(a[i]>=a[pivot])
            b.push_back(a[i]);
        else
            c.push_back(a[i]);
    }

    vector<int>sorted_b=quick_sort(b);
    vector<int>sorted_c=quick_sort(c);

    //conquer
    vector<int>sorted_a;
    for(int i=0; i<sorted_b.size(); i++)
        sorted_a.push_back(sorted_b[i]);

    sorted_a.push_back(a[pivot]);

    for(int i=0; i<sorted_c.size(); i++)
        sorted_a.push_back(sorted_c[i]);

    return sorted_a;

}



int main()
{

    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];

    vector<int>sort_a = quick_sort(a);
    for(int i=0; i<sort_a.size(); i++)
        cout<<sort_a[i]<<" ";

    return 0;
}

/*
6
2 6 7 3 1 5

5
6  2  3  3  5

6
5 6 7 8 0 1

*/
