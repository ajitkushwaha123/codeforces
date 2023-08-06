#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n , a, b ,c;
    cin>>n>>a>>b>>c;

    vector<int> v;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);

    sort(v.begin() , v.end());

    int sum = 0;

    if(v[0] + v[1] + v[2] == n)
    {
        cout<<"3"<<endl;
    }
    else if( v[0] + v[1] == n)
    {
       cout<<"2"<<endl;   
    }
    else if( v[1] + v[2] == n)
    {
       cout<<"2"<<endl;   
    }
    else if( v[0] + v[2] == n)
    {
       cout<<"2"<<endl;   
    }
    else if(v[0] == n || v[1] == n || v[2] == n)
    {
        cout<<"1"<<endl;
    }else
    {
        cout<<"0"<<endl;
    }
}