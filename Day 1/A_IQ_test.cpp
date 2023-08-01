#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int arr[n];

    for(int i= 0; i<n ; i++)
    {
        cin>>arr[i];
    }

    int odd_count = 0 , even_count = 0 , odd_index , even_index;

    for(int i = 0; i<n; i++)
    {
        if(arr[i] % 2  == 0)
        {
            odd_count++;
            odd_index = i+1;
        }
        else if(arr[i] % 2 == 1)
        {
            even_count++;
            even_index = i+1;
        }
    }

    if(odd_count == 1)
    {
        cout<<odd_index<<endl;
    }
    else if(even_count == 1)
    {
        cout<<even_index<<endl;
    }


}