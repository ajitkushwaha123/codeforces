#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a = 6 ;
    int b =  28;

    int gcd = 0;

    if(a<b)
    {
        for(int i= 1; i<=a ; i++)
        {
            if((a%i == 0) && (b%i == 0))
            {
              if(gcd < i)
            {
                gcd = i;
            }
            }


        
        }
    }

    else 
    {
        for(int i= 1; i<=b ; i++)
        {
            if(a%i == 0 && b%i == 0)
            {
              if(gcd < i)
            {
                gcd = i;
            }
            }
            
        }
    }

    cout<<gcd<<endl;
}

