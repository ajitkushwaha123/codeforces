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

        int count = 0;

        string s;
        cin>>s;

        int x = 0,y = 0;

        for(int i= 0; i<s.length() ; i++)
        {
            if(s[i] == 'U')
            {
                y += 1;
            }
            else if(s[i] == 'R')
            {
                x += 1;
            }
            else if(s[i] == 'L')
            {
                x -= 1;
            }
            else if(s[i] == 'D')
            {
                y -= 1;
            }

       //     cout<<x<<" "<<y<<endl;

            if(x == 1 && y == 1)
            {
                cout<<"YES"<<endl;

                count++;
                break;
            }

        }

        

        if(count == 0)
        {
            cout<<"NO"<<endl;
        }
    }
}