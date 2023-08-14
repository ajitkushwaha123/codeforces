#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    char arr[n][n];

   /// vector<vector<int , int>> v;

    for(int i= 0; i<n ; i++)
    {
        for(int j=  0; j<n ; j++)
        {
           // cin>>v[i][j];
             cin>>arr[i][j];
        }
    }

    char b = arr[0][1];

    char a = arr[0][0];
    //cout<<b<<endl;
    int count = 0;

    for(int i= 0; i<n ; i++)
    {

        for(int j=  0; j<n ; j++)
        {
            if((i == j && arr[i][j] != a) || (i == j && arr[i][j] == b) || ( (i == n - j - 1) && (arr[n-j-1][n-i-1] != a))
            || ( (i == n - j - 1) && (arr[n-j-1][n-i-1] == b))
            
            )
            {
                count++;
            }

            else if((i != j) && (i != n - j - 1) )
            {
                if(arr[i][j] != b)
                {
                    count++;
                }
            }


        }
    }

    if(count > 0)
    {
        cout<<"NO"<<endl;
    }else
    {
        cout<<"YES"<<endl;
    }


    // for(int i= 0; i<n ; i++)
    // {
    //     for(int j=  0; j<n ; j++)
    //     {
    //         cout<<arr[i][j];
    //     }cout<<endl;
    // }


}