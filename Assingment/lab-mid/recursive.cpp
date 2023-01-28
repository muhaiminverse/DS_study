#include<bits/stdc++.h>
using namespace std;

bool Ispalindrome(string a, int start, int last)
{
    if(start>=last)
        return true;

    if(a[start]!=a[last])
        return false;

    return Ispalindrome(a,start+1,last-1);

}

int main()
{
    string a;
    cin>>a;
    int start=0,last=a.size()-1;
    bool okay = Ispalindrome(a,start,last);
    if(okay)
        cout<<"Palindrome"<<endl;
    else
        cout<<"Not Palindrome"<<endl;

    return 0;
}


