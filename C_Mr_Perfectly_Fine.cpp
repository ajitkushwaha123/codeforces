#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    int s;

    while(t--)
    {
        int n;
        cin>>n;

        vector<pair<int , int>> p; 

        for(int i = 0; i<n ; i++)
        {
            int a;
            cin>>a;

            cin>>s;

            p.push_back(make_pair(a , s));
        }

        int ans = 0;
        int min_one_one = 1000000;
        int min_one_zero = 1000000;
        int min_zero_one = 1000000;

        sort(p.begin() , p.end());

        for(int i = 0; i<n ; i++)
        {
            if(p[i].second == 0)
            {
                continue;
            }
            else if(p[i].second == 11)
            {
              //  cout<<p[i].first;
                if(min_one_one > p[i].first)
                {
                    min_one_one  = p[i].first;
                }
            }

            else 
            {
                if(p[i].second == 1)
                {
                    if(min_one_zero > p[i].first)
                    {
                       min_one_zero = p[i].first;
                    }
                }
                else if(p[i].second == 10)
                {
                    if(min_zero_one > p[i].first)
                    {
                       min_zero_one = p[i].first;
                    }
                }
            }

            
        }

        if(min_one_one < 1000000 && min_one_zero < 1000000 && min_zero_one < 1000000)
        {
            if(min_one_zero + min_zero_one <= min_one_one)
            {
                cout<<min_zero_one + min_one_zero<<endl; 
            }else
            {
                cout<<min_one_one<<endl;
            }
        }
        else if(min_one_one == 1000000 && min_one_zero < 1000000 && min_zero_one < 1000000)
        {
            cout<<min_one_zero+min_zero_one<<endl;
        }
        else if(min_one_one == 1000000 && (min_one_zero == 1000000 || min_zero_one == 1000000))
        {
            cout<<"-1"<<endl;
        }
        else if((min_one_one < 1000000) && (min_one_zero == 1000000 || min_zero_one == 1000000))
        {
            cout<<min_one_one<<endl;
        }













    //     if(min_one_zero + min_zero_one < min_one_one)
    //     {
    //         cout<<min_one_zero + min_zero_one<<endl;
    //     }else if(min_one_zero + min_zero_one >= min_one_one)
    //     {
    //         cout<<min_one_one<<endl;
    //     }
    //     else if(min_one_one == 1000000 && min_one_zero + min_zero_one < 1000000)
    //     {
    //         cout<<min_one_zero + min_zero_one<<endl;
    //     }
    //     else if((min_one_zero == 1000000 ||  min_zero_one == 1000000) && (min_one_one < 1000000))
    //     {
    //         cout<<min_one_one<<endl;
    //     }else
    //     {
    //         cout<<"-1"<<endl;
    //     }


    //  //  cout<<min_one_one<<endl;

    //     // for(int i = 0; i<n ; i++)
    //     // {
    //     //     cout<<p[i].first<<" "<<p[i].second<<endl; 
    //     // }
        




    }
}