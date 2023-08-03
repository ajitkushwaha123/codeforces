#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    vector<int> v;

    for(int i= 0; i<n; i++)
    {
        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    int chest = 0, biceps = 0, back = 0;

    for(int i= 0; i<v.size() ; i++)
    {
        if(i%3 == 0)
        {
            chest += v[i];
        }else if(i%3 == 1)
        {
            biceps += v[i];
        }else if(i%3 == 2)
        {
            back += v[i];
        }
    }

   // cout<<chest<<biceps<<back<<endl;

    // for(int i= 0; i<v.size() ; i++)
    // {
    //     cout<<v[i]<<" ";
    // }

    if((chest > biceps && biceps >= back) || (chest > back && back >= biceps))
    {
        cout<<"chest"<<endl;
    }
    else if((biceps > chest && chest >= back) || (biceps > back && back >= chest))
    {
        cout<<"biceps"<<endl;
    }
    else if((back > chest && chest >= biceps) || (back > biceps && biceps >= chest))
    {
        cout<<"back"<<endl;
    }

}