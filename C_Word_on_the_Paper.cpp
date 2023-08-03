#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    while(n--)
    {
        int m = 8;
       char arr[m][m];

       for(int i= 0; i<m ; i++)
       {
        for(int j = 0; j<m ;j++)
        {
            cin>>arr[i][j];
        }
       }

       int count = 0;

       vector<char> v;

       for(int i= 0; i<m ; i++)
       {
        for(int j = 0; j<m ;j++)
        {
            if(arr[i][j] != '.')
            {
                count++;
                v.push_back(arr[i][j]);
            }
        }
       }

       for(int i= 0; i<count ; i++)
       {
          cout<<v[i];
       }cout<<endl;
    }
}