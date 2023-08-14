#include<bits/stdc++.h>
using namespace std;
int main()

{
    int n;
    cin>>n;

    int min = 999999;

    vector<int> v;
    for(int i=0; i<n ; i++)
    {
        int ele;
        cin>>ele;

        v.push_back(ele);
    }

    vector<int> s;

    for(int i= 1; i<v.size() - 1; i++)
    {
        for(int j = 0;  j<v.size(); j++)
        {
            if(i == j)
            {
                continue;
            }else
            {
                s.push_back(v[j]);
            }
        }

        // for(int i= 0; i<s.size() ; i++)

        // {
        //     cout<<s[i]<<" ";
        // }cout<<endl;

        int max = 0;

       // sort(s.begin() , s.end());

        for(int j  = 0; j<s.size() - 1 ; j++)
        {

           // cout<<
            if((s[j+1] - s[j]) > max)
            {
                max = (s[j+1] - s[j]);
            }
        }

        if(max < min)
        {
            min = max;
        }

        s.clear();
    }

    cout<<min<<endl;



    
}