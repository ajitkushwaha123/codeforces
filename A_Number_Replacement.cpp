#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        vector<int> v;

        for(int i= 0; i<n; i++)
        {
            int ele;
            cin>>ele;

            v.push_back(ele);
        }

        string s;
        cin>>s;

        vector<pair<int , char>> p;
        vector<pair <int , char>> q;

        for(int i= 0; i<v.size() ; i++)
        {

            p.push_back(make_pair(v[i] , s[i]));
            q.push_back(make_pair(v[i] , s[i]));
        }


        sort(p.begin() , p.end());
        

        p.erase(unique(p.begin() , p.end()) , p.end());

        for(int i = 0; i<v.size() ; i++)
        {
         //   cout<<q[i].first<<" "<<q[i].second<<endl;
        }

        int count = 0;

        for(int i = 0; i<p.size() ; i++)
        {
            for(int j= 0; j<q.size() ; j++)
            {
                if(p[i].first == q[j].first)
                {
                    if(q[j].second == p[i].second);
                    count++;
                }
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

}