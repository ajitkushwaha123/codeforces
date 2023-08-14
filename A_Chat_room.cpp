#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;

    int a = 0;
  


    for(int i=0; i<s.length() ; i++)

    {
        if(s[i] == 'h' && a == 0)
        {
            a = 1;
        }
        else if(s[i] == 'e' && a == 1)
        {
            a = 2;
        }
        else if(s[i] == 'l' && a == 2)
        {
            a = 3;
        }
        else if(s[i] == 'l' && a == 3)
        {
            a = 4;
        }else if(s[i] == 'o' && a == 4)
        {
            a =5;
        }
    }

    if(a == 5)

    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}