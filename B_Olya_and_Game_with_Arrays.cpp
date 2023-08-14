#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    int maxi =0;
    vector<int> max;

    while(t--)
    {

        int s;
        cin>>s;

        int dif = 0;

        vector<int> v;

        while(s--)
        {
            int n;
            cin>>n;

            

            for(int i=0; i<n ; i++)
            {
                int ele;
                cin>>ele;
                v.push_back(ele);
            }

            sort(v.begin() , v.end());


         //  int max = v[1];

         for(int i= 0; i<v.size() ; i++)
        {
            cout<<v[i]<<" ";
        }cout<<endl;

           max.push_back(v[1]);

           
           
     }

        // for(int i= 0; i<max.size() ; i++)
        // {
        //     cout<<max[i]<<" ";
        // }cout<<endl;

       // max.clear();
        

    }
}