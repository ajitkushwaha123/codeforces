#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int m = n;

    int arr[14] = {4,7,44,444,77,777,47,74,447,774,474,747,744 ,477};

    vector<int> v;

    while(n>0)
    {
        int m = n%10;

        v.push_back(m);

        n = n/10;
    }

    reverse(v.begin() , v.end());

    int count  = 0;

    int four_count = 0, seven_count = 0;

    for(int i = 0; i<14; i++)
    {
        if(m % arr[i] == 0)
        {
            count++;
        }
    }

    if(count > 0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    // if(m % arr[i] == 0)
    // {
    //     cout<<"YES"<<endl;
    // }else
    // {
    //     for(int i= 0; i<v.size() ; i++)
    // {
    //     if(v[i] == 7)
    //     {
    //         seven_count++;
    //     }else if(v[i] == 4)
    //     {
    //         four_count++;
    //     }
    // }


    // if(four_count + seven_count == v.size())
    // {
    //     cout<<"YES"<<endl;
    // }
    // else
    // {
    //     cout<<"NO"<<endl;
    //


}