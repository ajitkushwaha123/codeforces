#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    int sum = 0;

    int result = 0;

    int min = 1000000;

    int arr[t];

    for(int i= 0; i<t;  i++)
    {
        cin>>arr[i];
    }

    vector<int> v;

    for(int i= 0; i<t;  i++)
    {
        for(int j = 0; j<arr[i] ; j++)
        {

            int ele;
            cin>>ele;

           // cout<<ele<<" ";

            v.push_back(ele);  
        }

        for(int j = 0; j<arr[i] ; j++)
        {
            sum += v[j];
        }

     //   cout<<sum<<endl;

        result = sum * 5 + 15*arr[i];

       //  cout<<result<<" ";

         if(min > result)
         {
            min = result;
         }


        // for(int j = 0; j<arr[i] ; j++)
        // {
        //     cout<<v[j]<<" ";
        // }cout<<endl;

        v.clear();
        sum = 0;
    }

    cout<<min<<endl;

}