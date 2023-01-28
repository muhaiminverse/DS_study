
// C++ program to find given two array
// are equal or not
#include <bits/stdc++.h>
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
// Returns true if arr1[0..n-1] and arr2[0..m-1]
// contain same elements.
vector<int> areEqual(vector<int>a,vector<int>b)
{
	// If lengths of array are not equal means
	// array are not equal
	int Coutnh=0;

	// Sort both arrays
	sort(a, b );


	// Linearly compare elements
	for (int i = 0; i < b.size(); i++)
		if (a[i] == b[i])
                Coutnh++;

	// If all elements were same.

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
