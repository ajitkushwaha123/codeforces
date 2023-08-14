#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    vector<int> v;

    for(int i=0 ;i<n ; i++)
    {
        int ele;
        cin>>ele;

        v.push_back(ele);
    }

    sort(v.begin() , v.end());
    reverse(v.begin() , v.end());

    for(int i=0 ;i<n ; i++)
    {
      //  cout<<v[i]<<" ";
    }

    for(int i = 0; i<v.size() ; i++)
    {
        for(int j= 0; j<v.size() ; j++)
        {
            while(v[i] > v[j])
            {
                v[i] = v[i] - v[j];
            }
        }
    }

    for(int i = 0; i<v.size() ; i++)
    {
        for(int j= 0; j<v.size() ; j++)
        {
            while(v[i] > v[j])
            {
                v[i] = v[i] - v[j];
            }
        }
    }

    int sum = 0;

    for(int i=0 ;i<n ; i++)
    {
     //   cout<<v[i]<<" ";
        sum += v[i];
    }

    cout<<sum<<endl;
}