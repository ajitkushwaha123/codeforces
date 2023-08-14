#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;

    int max = 0;

    for(int i = n; i<=m ; i++)
    {
        for(int j = 1; j<= i ; j++)
        {           
            for(int k = n+1 ; k<= m; k++)
            {
                if(i%j == 0  && k%j ==0)
                {
                    if(j > max)
                    {
                        max = j;
                    }

                    cout<<max<<endl;
                }
            }
        }
    }

  //  cout<<max<<endl;
}