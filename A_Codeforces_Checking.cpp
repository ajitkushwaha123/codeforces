#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        char a;
        cin>>a;

        string s = "codeforces";

        int count = 0;

        for(int i=0; i<s.length(); i++)
        {
            if(s[i] == a)
            {
                count++;
            }
        }

        if(count > 0)
        {
            cout<<"YES"<<endl;
        }

        else
        {
            cout<<"NO"<<endl;
        }
    }
}