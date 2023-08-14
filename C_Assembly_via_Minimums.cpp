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

        for(int i= 0; i<(n*(n-1))/2 ; i++)
        {
            int ele;
            cin>>ele;

            v.push_back(ele);
        }

       sort(v.begin() , v.end());

       v.erase(unique(v.begin() , v.end()) , v.end());

       for(int i=0 ;i<v.size() ; i++)
       {
          cout<<v[i]<<" ";
       }cout<<endl;

    }
}