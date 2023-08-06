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

        int count = 0;

        vector<int> v;
        for(int i= 0; i<n ; i++)
        {
            int ele;
            cin>>ele;

            v.push_back(ele);
        }

        sort(v.begin() , v.end());
        reverse(v.begin() , v.end());

        vector<pair<int , int>> p;

        for(int i= 0; i<v.size() ; i++)
        {
            for(int j= i+1; j<v.size() ; j++)
            {
                p.push_back(make_pair(v[i] , 2*v[j]));
            }
        }

        vector<int> w;

        for(int i= 0; i<p.size() ; i++)
        {
            int a = p[i].first ;
            int b = p[i].second;

            if(a<=b)
            {
                for(int j = 1 ; j<= a; j++)
                {
                    if(a%j == 0 && b%j == 0)
                    {
                        w.push_back(j);
                    }
                }
            }
            else
            {
                for(int j = 1 ; j<= b; j++)
                {
                    if(b%j == 0 && a%j == 0)
                    {
                       w.push_back(j);
                    }
                }
            }
            
          if(w[w.size() - 1] > 1)
          {
            count++;
          }

            w.clear();
        }

     cout<<count<<endl;     
        
    }
}
