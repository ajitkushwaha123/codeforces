#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t , q;
    cin>>t>>q;

    int count = 0;

    int con = 0;

    vector<int> p;

    while(t--)
    {
        int a;
        cin>>a;

        vector<int> v;

        for(int i=0; i<a ;i++)
        {
            int ele;
            cin>>ele;

            v.push_back(ele);
        }

        
        for(int i=0; i<v.size() ;i++)
        {
            if(v[i] < q)
            {
                con++;
            }
        }



        if(con > 0)
        {
            p.push_back(a);
            count++;
        }


        // for(int i=0; i<v.size() ;i++)
        // {
        //     cout<<v[i]<<" ";
        // }cout<<endl;


    }

    cout<<count<<endl;

    sort(p.begin() , p.end());

    for(int i=0; i<p.size() ; i++)
    {
        cout<<p[i]<<" ";
    }


}