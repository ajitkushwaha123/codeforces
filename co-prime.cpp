#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;

    int max = 0;

    for(int  i= 1 ; i<=a; i++)
    {
        if(a%i == 0 && b%i ==0)
        {
            if(i>max)
            {
                max = i;
            }
        }
    }

    cout<<max<<endl;
}