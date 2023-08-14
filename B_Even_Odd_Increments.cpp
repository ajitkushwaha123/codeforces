#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
    cin>>t;

    long long sum =0;

    while(t--)
    {
        int n,q;
        cin>>n>>q;

        vector<long long> v;
        vector<pair<int , long long> > p;

        for(int i= 0 ; i<n ; i++)
        {
            long long ele;
            cin>>ele;

            v.push_back(ele);
        }

        for(int i= 0 ; i<q ; i++)
        {
            long long a,b;
            cin>>a>>b;

            p.push_back(make_pair(a,b));
        }

        for(int i= 0 ; i<p.size() ; i++)
        {
            if(p[i].first == 0)
            {
                for(int j=0 ; j<v.size() ; j++)
                {
                    if(v[j] % 2 == 0)
                    {
                        v[j] += p[i].second;
                    }
                }
            }

            else if(p[i].first == 1)
            {
                for(int j=0 ; j<v.size() ; j++)
                {
                    if(v[j] % 2 == 1)
                    {
                        v[j] += p[i].second;
                    }
                }
            }

            sum = 0;

            for(int j= 0 ;j<v.size() ; j++)
            {
              // cout<<v[j]<<" ";
                sum += v[j];
            }

           cout<<sum<<endl;
        }
    }
}