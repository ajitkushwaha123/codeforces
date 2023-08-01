#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int a[n];

    for(int i= 0; i<n  ; i++)
    {
        cin>>a[n];
    }

    int neg_count= 0;

    for(int i = 0; i<n ; i++)
    {
        if(a[i] < 0)
        {
            neg_count++;
        }
    }

    if(neg_count % 2 != 0)
    {
        for(int i= 0; i<n ; i++)
        {
            
        }
    }



    int zero_count = 0;
    vector<int> zero;

    for(int i= 0; i<n ;i++)
    {
        if(a[i] == 0)
        {
            zero_count++;
            zero.push_back(a[i]);
        }
    }

    cout<<zero_count<<" ";

    for(int i= 0; i<zero.size() ; i++)
    {
        cout<<zero[i]<<" ";
    }

}