#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n , a, b, c;
    cin>>n>>a>>b>>c;
    vector<int> v;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);

    for(int i= 0; i<v.size() ; i++)
    {
        for(int j = 0 ; j<v.size()  ; j++)
        {
            if(v[i] + v[j] == n )
            {
                cout<<"2"<<endl;
            }
        }
    }
}