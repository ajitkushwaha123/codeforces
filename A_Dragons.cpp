#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,n;
    cin>>s>>n;

    vector<pair<int, int> > p;

    for(int i=0; i<n; i++)
    {
        int a,b;
        cin>>a>>b;

        p.push_back(make_pair(a,b));
    }

    sort(p.begin() , p.end());

    int count = 0;

    for(int i=0 ;i<p.size() ; i++)
    {
        if(p[i].first < s)
        {
            s += p[i].second;
            count++;
        }else
        {
            break;
        }
    }

    if(count == n)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}