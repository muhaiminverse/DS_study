#include<bits/stdc++.h>
using namespace std;


vector<int>merge_sort(vector<int>a)
{
    //base case
    if(a.size()<=1)
    {
        return a;
    }
    int mid = a.size()/2;
    vector<int>b,c;

    for(int i=0; i<mid; i++)
        b.push_back(a[i]);

    for(int i=mid; i<a.size(); i++)
        c.push_back(a[i]);

    vector<int>sorted_b=merge_sort(b);
    vector<int>sorted_c=merge_sort(c);

    vector<int>sorted_a;
    int idx1=0;
    int idx2=0;
    for(int i=0; i<a.size(); i++)
    {
        if(idx1==sorted_b.size())
        {
            sorted_a.push_back(sorted_c[idx2]);
            idx2++;
        }
        else if(idx2==sorted_c.size())
        {
            sorted_a.push_back(sorted_b[idx1]);
            idx1++;
        }
        else if(sorted_b[idx1]< sorted_c[idx2])
        {
            sorted_a.push_back(sorted_b[idx1]);
            idx1++;
        }
        else
        {
            sorted_a.push_back(sorted_c[idx2]);
            idx2++;
        }
    }
    return sorted_a;
}



int main()
{
    int n;
    cin>>n;
    vector<string>a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    //finding the ascii values of each char in the word array
    vector<int> ascii_values;
    for(int i=0; i<n; i++)
    {
        int each_a_val = int(a[i][0]);
        ascii_values.push_back(each_a_val);
    }
    for (int i = 0; i < ascii_values.size(); i++)
    {
        cout << ascii_values[i] << " ";
    }
    cout << endl;
    //sending the ascii value to merge sorting
    vector<int>ans= merge_sort(ascii_values);
    for(int i=0; i<ans.size(); i++)
        cout<<ans[i]<<" ";

    //finally
    vector<string>a_final;

    for(int i=0; i<n; i++)
    {
        int j=0;
        while(j<n)
        {
            if(a[j][0]==ans[i])
            {
                a_final.push_back(a[j]);
                break;
            }
            j++;
        }

    }

    for(int i=0; i<ans.size(); i++)
        cout<<a_final[i]<<" ";
    return 0;
}

/*
5
yellow apple children zzz chill

*/
