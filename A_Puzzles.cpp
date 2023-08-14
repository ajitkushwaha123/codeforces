#include<bits/stdc++.h>
using namespace std;
int main()

{
    int n,m;
    cin>>n,m;

    vector<int> v;

    for(int i= 0; i<m ; i++)
    {
        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    for(int i= 0; i<m ; i++)
    {
        for(int j = 0; j < n ; j++)
        {
            if(i == j)
            {
                continue;
            }
            else
            {
                int dif = abs( v[i] - v[j]);
                cout<<dif<<endl;
            }
        }
    }
}