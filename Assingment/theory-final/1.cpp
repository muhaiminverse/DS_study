#include<bits/stdc++.h>
using namespace std;

void fun(int l,int r)
{
	int mid = (l+r)/2;
	for(int i = l ; i <= r ; i++)
	{
		cout<<i<<endl;
	}
	cout<<"loop ends"<<endl;
	if(l<r){
        cout<<"called"<<endl;
		fun(l,mid);
		fun(mid+1,r);
	}
}

int main()
{
	int n;
	cin>>n;
	fun(0,n-1);
}


