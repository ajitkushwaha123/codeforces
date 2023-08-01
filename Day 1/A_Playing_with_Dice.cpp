#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;

    // int a[6] = {1,2,3,4,5,6};

    int neg = 0 ,pos = 0,dr = 0;

    for(int i = 1; i<=6 ; i++)
    {
        if(abs(a-i) < abs(b-i))
        {
            neg++;
        }
        else if(abs(a-i) > abs(b-i))
        {
            pos++;            
        }
        else
        {
            dr++;
        }
    }

    cout<<neg<<" "<<dr<<" "<<pos<<endl; 

}