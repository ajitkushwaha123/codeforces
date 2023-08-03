#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1,2,2,1,3,4,5,2};

    sort(v.begin() , v.end());

    v.erase(unique(v.begin() , v.end()) , v.end());

    for(int i=0; i<v.size() ; i++)
    {
        cout<<v[i]<<" ";
    }
}