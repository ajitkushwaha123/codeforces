#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n , k;
    cin>>n>>k;

    vector<pair<int , int >> v;

    for(int i= 0; i<n ; i++)
    {
        int a,b;
        cin>>a>>b;

        v.push_back(make_pair(a,b));

   }

//    for(int i= 0; i<n ; i++)
//    {
//         cout<<v[i].first<<" "<<v[i].second<<endl;
//    }

   long long min = -10000000000000000;

   for(int i= 0; i<n ; i++)
   {

    int temp = 0;
        if(v[i].second >= k)
        {
            temp = v[i].first - (v[i].second - k);
        }
        else if(v[i].second < k)
        {
            temp = v[i].first;
        }

        if(min < temp )
        {
            min = temp;
        }
   }

   cout<<min<<endl;
}
