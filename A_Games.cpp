#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

        vector<pair<int , int>> v;

        for(int i = 0; i<n ; i++)
        {
            int a,b;
            cin>>a>>b;

            v.push_back(make_pair(a,b));
        }

        int count = 0;

        for(int i = 0; i<n ; i++)
        {
            for(int j = 0; j<n ; j++)
            {
                if(v[i].first == v[j].second)
                {
                    count++;
                }
            }
        }

        cout<<count<<endl;
}