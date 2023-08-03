#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int m = n;

    if(n>0)
    {
        cout<<n<<endl;
    }
    else
    {

        m = m/10;

        int k  = n%10;
        
        n = n/10;
        n = n/10;
        n = n*10;

        n = n + k;

        if(n<m)
        {
            cout<<m<<endl;
        }else
        {
            cout<<n<<endl;
        }
    }
}