#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    stack<char>a;

    for(int i=0; i<s.size(); i++)
    {
        char now = s[i];
        if(now == '(' || now=='{' || now =='[')
            a.push(now);
        else
        {
            if(a.empty())
            {
                cout<<"No"<<endl;
                return 0;
            }
            if(now==')' && a.top()=='(')
                a.pop();

            else if(now=='}' && a.top()=='{')
                a.pop();

            else if(now==']' && a.top()=='[')
                a.pop();

            else
            {
                cout<<"No"<<endl;
                return 0;
            }
        }
    }

    if(a.empty())
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;

    return 0;
}

