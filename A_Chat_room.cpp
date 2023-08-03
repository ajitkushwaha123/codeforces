#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;

    for(int i = 0; i<s.length() ; i++)
    {
        if(s[i] == 'h')
        {
            s.erase(s.begin() + 0 , s.begin() + i );
        }
    }

    reverse(s.begin() , s.end());

    for(int i = 0; i<s.length() ; i++)
    {
        if(s[i] == 'o')
        {
            s.erase(s.begin() + 0 , s.begin() + i );
        }
    }

    reverse(s.begin() , s.end());

    for(int i =0; i<s.length() ; i++)
    {
        if((s[i] == s[i+1]) && s[i+1] == 'h')
        {
            s.erase(s.begin() + i);
        }

        // if((s[i] == s[i+1]) && s[i+1] == 'o')
        // {
        //     s.erase(s.begin() + i);
        // }
    }

    for(int i =0; i<s.length() ; i++)
    {
        if((s[i] == s[i+1]) && s[i+1] == 'o')
        {
            s.erase(s.begin() + i);
        }
    }












    for(int i=0; i<s.length() ; i++)
    {
        cout<<s[i];
    }
}