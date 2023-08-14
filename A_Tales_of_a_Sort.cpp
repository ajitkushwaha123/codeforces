#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long  t;
    cin>>t;

    while(t--)

    {
        long long n;
        cin>>n;

        long long arr[n];
        for(long long i=0; i<n ; i++)
        {
            cin>>arr[i];
        }

        long long ans = 0;

        for(long long i = n-2; i>=0; i--)
        {
            if(arr[i+1] < arr[i])
            {
                ans = max(ans , arr[i]);
            }
        }

        cout<<ans<<endl;
    }
}

