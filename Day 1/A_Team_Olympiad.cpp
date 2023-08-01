#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    vector<int> v;

    for(int i = 0; i<n ; i++)
    {
        int ele;
        cin>>ele;

        v.push_back(ele);
    }

    int one_count = 0 , two_count = 0 , three_count = 0;

    for(int i = 0; i<v.size() ; i++)
    {
        if(v[i] == 1)
        {
            one_count++;
        }
        else if(v[i] == 2)
        {
            two_count++;
        }
        else if(v[i] == 3)
        {
            three_count++;
        }
    }

    int result = 0;

    if((one_count <= two_count) && (one_count <= three_count
    ))
    {
        result = one_count;
    }
    else if((two_count <= one_count) && (two_count <= three_count
    ))
    {
        result = two_count;
    }else
    {
        result = three_count;
    }

    cout<<result<<endl;
    int one_index  , two_index = 0, three_index = 0;
    vector<int> one;
    vector<int> two;
    vector<int> three;


        for(int i= 0; i<v.size() ; i++)
        {
            if(v[i] == 1)
            {
                one_index = i+1;
                one.push_back(one_index);
            }
            else if(v[i] == 2)
            {
                two_index = i+1;
                two.push_back(two_index);
            }
            else if(v[i] == 3)
            {
                three_index = i+1;
                three.push_back(three_index);
            }
        }

        one.erase(unique(one.begin() , one.end()) , one.end());
        two.erase(unique(two.begin() , two.end()) , two.end());
        three.erase(unique(three.begin() , three.end()) , three.end());

        for(int i= 0; i<result ; i++)
        {
            cout<<one[i]<<" "<<two[i]<<" "<<three[i]<<endl;
        }
}