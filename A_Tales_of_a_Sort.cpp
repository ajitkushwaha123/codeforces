#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        long long n;
        cin>>n;

        vector<int> v;

        for(long long i= 0; i<n ; i++)
        {
            long long ele;
            cin>>ele;

            v.push_back(ele);
        }

        long long count = 0;

        for(long long i= 0; i<v.size() - 1  ; i++)
        {
            while(v[i] > v[i+1])
            {
                for(long long j = 0; j<v.size() ; j++)
                {
                    v[i] = v[i] -1;
                    if(v[i] < 0)
                    {
                        v[i] = 0;
                    }
                }
                count++;
            }
        }

        cout<<count<<endl;

    }
}