#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long k,l;
    cin>>k>>l;

    double m= l;

    int count = 0;

    while(m>1)
    {
        m = m/k;
    }

    if(m == 1)
    {
        cout<<"YES"<<endl;
         while(l > 1)
         {
            l = l/k;
            count++;
         }


             cout<<count - 1<<endl;

    }else
    {
        cout<<"NO"<<endl;
    }
}