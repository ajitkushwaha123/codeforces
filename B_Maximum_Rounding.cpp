#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        string s;
        cin>>s;

        vector<string> v;

        for(int i= s.length() - 1; i>0 ; i--)
        {
            if(s[i] < 5)
            {
                s[i] = 0;

                
            }
            else
            {
                
                
            }
        }

        for(int i= 0 ; i<v.size() ; i++)
        {
            cout<<v[i];
        }cout<<endl;
    }
}