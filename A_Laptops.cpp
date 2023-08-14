#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;


    vector<pair<int , int>>v;

    for(int i =0; i<n ; i++)
    {
        int a,b;
        cin>>a>>b;

        v.push_back(make_pair(a,b));
    }

    sort(v.begin() , v.end());

    for(int i =0; i<v.size() ; i++)
    {
     //   cout<<v[i].first<<" "<<v[i].second<<endl;
    }

    int count = 0;
    int sneha = 0;

    for(int i = 0; i<v.size() - 1 ; i++)
    {
        if(v[i].second > v[i+1].second && v[i].first < v[i+1].first)
        {
            count++;
        }
    }

    if(count > 0)
    {
        cout<<"Happy Alex"<<endl;
    }else
    {
        cout<<"Poor Alex"<<endl;
    }
}