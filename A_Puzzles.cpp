#include<bits/stdc++.h>
using namespace std;
int main()

{
    int n,m;
    cin>>n>>m;

    vector<int> v;

    for(int i=0; i<m ; i++)
    {
        int ele;
        cin>>ele;

        v.push_back(ele);
    }

    sort(v.begin() , v.end());
    int min = v[0];

    for(int i= 0; i<v.size() ; i++)
    {
        int a = v[i+1] - v[i];

        if(a < min)
        {
            min = a;
        }
    }

    cout<<min<<endl;
}