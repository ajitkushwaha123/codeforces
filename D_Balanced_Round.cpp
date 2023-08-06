#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m;
    cin>>m;
    while(m--)
    {
        int n , k;
        cin>>n>>k;

        vector<int> v;

        for(int i= 0; i<n ; i++)
        {
            int ele;
            cin>>ele;
            v.push_back(ele);
        }

        sort(v.begin() , v.end());

        for(int i=0; i<v.size()  ; i++)
        {
        //    cout<<v[i]<<endl;
        }

        vector<int> w;

        w.push_back(v[0]);

        for(int i = 1; i<v.size()  ; i++)
        {

            if((abs(v[0] - v[1]) > k))
            {
              //  w.push_back(0);
                
            }

            if((abs(v[i-1] - v[i])) > k)
            {
                w.push_back(0);
            }

          
                w.push_back(v[i]);
        
        }

        int count = 0;
        int min = 0;

        for(int i= 0; i<w.size() ; i++)
        {
            if(w[i] == 0)
            {
                count = 0;
            }
            else
            {

                count++;
            }

            if(count > min)
            {
                min = count;
            }
        }

        cout<<n-min<<endl;
    }
}