
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int>a(n);
	for(int i=0;i<n;i++)
		cin>>a[i];
	sort(a.begin(),a.end());

	for(int i=0;i<n;i++)
		cout<<a[i]<< " ";

cout<<"\n";
           int ans = 1;
	for(int i=1 ; i<n ; i++)
		if(a[i]!=a[i-1])
			ans++;
	cout<<ans;
	return 0;
}

/*
5
1 3 2 1 2

12
12 11 12 1 3 56 8 9 15 6 7 2
*/
