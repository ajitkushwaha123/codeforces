#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    vector<int> v;

    while(t--)
    {

        int n;
        cin>>n;

        vector<int> v;
        for(int i= 0; i<n;  i++)
        {
            int a;
            cin>>a;

            v.push_back(a);
        }

        for(int i= 0; i<v.size() ; i++)
        {
            for(int j = i+1; j<v.size() ; j++)
            {
                if(v[i] == v[j])
                {
                    v[i] = v[j] = -1;
                }
            }
        }

        for(int i= 0 ;i<v.size() ; i++)
        {
            if(v[i] > 0)
            {
                cout<<v[i]<<endl;
            }
        }
}

}