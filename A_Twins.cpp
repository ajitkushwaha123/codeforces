#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    vector<int> v;

    for(int i= 0; i<n ; i++)
    {
        int a;
        cin>>a;

        v.push_back(a);
    }

    sort(v.begin() , v.end());

    // for(int i= 0; i<n ; i++)
    // {
    //     cout<<v[i]<<" ";
    // }

    int sum_right = 0;
    int sum_left = 0;

    int count = 0;
    
    for(int i= v.size() - 1 ; i>=0 ; i--)
    {
        sum_right += v[i];  
        count++;

        for(int j = 0; j<i ; j++)
        {
            sum_left += v[j];
        }  


        if(sum_right > sum_left)
        {
            cout<<count<<endl;
            break;
        }
            sum_left  = 0;

    }
    
}