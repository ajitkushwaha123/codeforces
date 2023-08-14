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

        string s;
        cin>>s;

        int count  =0;

        int l = s.length();

        for(int i=0 ;i<s.length()/2 ; i++)
        {
            if((s[i] == '0' && s[(l - 1 )- i] == '1') || (s[i] == '1' && s[l - 1 - i] == '0')  )
            {
                count++;
            }else
            {
                break;
            }
        }

       // cout<<count<<endl;

        cout<<abs(n - 2*count)<<endl;
    }
}