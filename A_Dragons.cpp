#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,n;
    cin>>s>>n;

    vector<pair<int, int>> v;

    for(int i=0; i<n ; i++)
    {
        int a,b;
        cin>>a>>b;

        v.push_back(a,b);
    }

    // for(int i=0; i<v.size() ; i++)
    // {
    //     cout<<v[i];
    // }






    // vector<int> v;
    // vector<int> w;

    // for(int i=0; i<n; i++)
    // {
    //     int a;
    //     cin>>a;
    //     v.push_back(a);

    //     int b;
    //     cin>>b;

    //     w.push_back(b);
    // }

    // sort(v.begin() , v.end());

    // for(int i =0; i<v.size() ; i++)
    // {
    //     cout<<v[i]<<" "; 
    // }

    // for(int i =0; i<v.size() ; i++)
    // {
    //     cout<<w[i]<<" "; 
    // }
}