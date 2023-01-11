#include<bits/stdc++.h>
using namespace std;


int main()
{
    /*string a;
    getline(cin,a);
    string original = a;
    reverse(a.begin(),a.end());

    if(original==a)
        cout<<"\n"<<a;
    else
        cout<<"Not Plaindrome";*/

    int n,remainder,reversed=0,original;
    cin>>n;
    original=n;

    while(n!=0)
    {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }
    if(original==reversed)
        cout<<"palindrome "<<original;




}
