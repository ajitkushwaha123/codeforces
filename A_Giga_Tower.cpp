#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;

    long long ans = n;

    long long count = 1;

    long long min = 888888888;


    vector<long long> v;

    if(n > 0)
    {
        while(n > 0)
        {
            long long m = n%10;
            if(m >= 8)
            {
              long long temp = n + 8 + (10-m);
              temp *= count;
              v.push_back(temp);
            }
            else if(m == 8)
            {
                int temp = n - 10;
                temp *= count;
              v.push_back(temp);
            }

            else
            {
               long long temp = n + (8-m)   ;
                temp *= count;
              v.push_back(temp);
            }

            n = n/10;
            count *= 10;
        }

        for(int i =0 ; i< v.size() ; i++)
    {
        if(min > v[i])
        {
            min = v[i];
        }
    }

    cout<<min - ans<<endl;
    }    

    else
    {
        while(n < 0)
        {
            long long k = abs(n);
             long long m = k%10;

            if(n > -8)
            {
               // int m = k%10;
                v.push_back(n + (10 +1 - m));
            }
            
            else if(m > 8)
            {
                 long long temp = n + (m-8); 
                temp *= count;
                v.push_back(temp);
            }else if(m == 8)
            {
                 long long temp = n + 10;
                temp *= count;
                v.push_back(temp);
            }else
            {
                 long long temp = n + (10 - (8-m));
                temp *= count;
                v.push_back(temp);
            }

            n = n/10;

            count*=10;    
        }

        long long max = 888888888;

            for(int i= 0; i<v.size() ; i++)
            {
                if(v[i] - ans <= max)
                {
                    max = v[i];
                }
            }

       cout<<max<<endl;

    }
}