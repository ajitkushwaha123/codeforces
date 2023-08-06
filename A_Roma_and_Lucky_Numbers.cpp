#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n , k;
    cin>>n>>k;
    int ans = 0;

    while(n--)
    {
        string s;
        cin>>s;
        
        int count = 0;

        for(int i=0; i<s.length() ; i++)
        {
            if(s[i] == '4' || s[i] == '7')
            {
                count++;
            }
        }

        if(count <= k)
        {
            ans++;
        }
    }

    cout<<ans<<endl;


    
}