#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    while(n--)
    {
        int k;
        cin>>k;

        vector<pair<int , int>> v;
        
        for(int i=0; i<k ; i++)
        {
            int a,b;
            cin>>a>>b;

            v.push_back(make_pair(a,b));
        }


        int min = 0;


        for(int i=0; i<k ; i++)
        {
      //      cout<<v[i].first<<" "<<v[i].second<<endl;
        }

        int index = 0;

        for(int i=0; i<k ; i++)
        {
            if(v[i].first <= 10)
            {
                if(min <= v[i].second)
                {
                    min = v[i].second;
                    index = i+1;
                }
            }
        }

        cout<<index<<endl;

        
        
    }
}