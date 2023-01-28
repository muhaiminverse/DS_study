#include <bits/stdc++.h>
using namespace std;

void prime_factors(int n)
{
	int c=2;
	while(n>1)
	{
		if(n%c==0){
		cout<<c<<" ";
		n/=c;
		}
		else c++;
	}
}

void distic_elements()
/* Driver code */
int main()
{
	int n;
	cin>>n;
	primeFactors(n);
	return 0;
}

