#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;

    cin>>t;
    while(t--)
    {
        long long a,b;
        cin>>a>>b;

        int count = 0;

        if(a%3 == 0 || a == b)
        {
            while(a>=b)
            {
                int k =a;
                a = a/3;
                
                if(a == b)
                {
                    count++;
                }
        
                a = 2*a;

                 if(a == b)
                {
                    count++;
                }

                if(k == b)
                {
                    count++;
                }

                if(a%3 != 0)
                {
                    cout<<"sneha"<<endl;
                    break;
                }


               
                
            }
        }
        else if(a<b)
        {
            cout<<"NO"<<endl;
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