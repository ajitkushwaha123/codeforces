#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {41,70,6,28,46};

    sort(v.begin() , v.end());

    for(int i=0; i<v.size() ; i++)
    {
        cout<<v[i]<<" ";
    }
}