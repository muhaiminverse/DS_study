#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin,s);

for(int i=0;i<s.length();i++)
if (i % 2 == 0){
    if(s[i]=='z' || s[i]=='Z')
        s[i]-=25;
    else
        s[i]+=1;
}
        cout<<s<<" ";
}
   /*
abcdefg         bbddffh
AbCdEFg         BbDdFFh
zfth            afuh
ZFTH            AFUH
   */

