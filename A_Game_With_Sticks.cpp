#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;

    int count = 0;

    while( n > 0 && m >0)
    {
        n-- , m--;
        count++;
    }

    if(count % 2 == 0)
    {
        cout<<"Malvika"<<endl;
    }
    else
    {
        cout<<"Akshat"<<endl;
    }
    
}