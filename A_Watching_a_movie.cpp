#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n>>x;

    int sum = 0;

    for(int i=0; i< n; i++)
    {
        int a,b;
        cin>>a>>b;

      //  cout<<b<<endl;

         int j = 1;
        while(j <= b)
        {
            j = j + x;
          //  cout<<j<<endl;

            if(j > a)
            {
                j = j-x;
                sum += b-j + 1;
                break;
            }else if(j == a)
            {
                sum += b-j + 1;
                break;
            }
        }

    }

    cout<<sum<<endl;
}