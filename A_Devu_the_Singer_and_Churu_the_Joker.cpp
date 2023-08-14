#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d;
    cin>>n>>d;

    int count = 0;

    vector<int> v;

    for(int i = 0; i<n ; i++)
    {
        int ele;
        cin>>ele;

        v.push_back(ele);
        v.push_back(10);
        count++;
    }

    int sum = 0;

    for(int i = 0; i <v.size() ; i++)
    {
        sum += v[i];
    }

    sum = sum - 10;

    if(sum <= d)
    {
        int ans = ((n-1)*10)/5;
        int a = (d-sum)/5;

        cout<<ans+a<<endl;
    }
    else
    {
        cout<<"-1"<<endl;
    }

    // if((d - sum) % 5 == 0)
    // {
    //     cout<<(d-sum)/5<<endl;
    // }
    // else
    // {
    //     cout<<"-1"<<endl;
    // }
}