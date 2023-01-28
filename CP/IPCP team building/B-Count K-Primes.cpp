#include <bits/stdc++.h>
using namespace std;

int a_to_b(){
    for(int i=a;i<=b;i++)
    {
        primeFactors(i);
    }
}


void primeFactors(int n, int k)
{
	int c=2;
	vector<int>Dist_a;
	while(n>1)
	{
		if(n%c==0){
		Dist_a.push_back(c);
		n/=c;
		}
		else c++;
	}
	int k_1 = distic_elements(Dist_a);


}



int distic_elements(vector<int>a){
    int Count;
    for(int i=0;i<=a.size()-1;i++)
    {
       if(a[i]!=a[i+1])
        Count++;
       else
        return 1;
    }
    return Count+1;
}

int main()
{
	int a,b,k,t;
	cin>>t;
	for(int i=1;i<=t;i++)
    {
        cin>>a>>b>>k;
        a_to_b(a,b);

    }
	primeFactors(n);
	return 0;
}

