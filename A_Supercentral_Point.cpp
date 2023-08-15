#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    vector<int> v;

    int count = 0;

    vector<pair<int , int> > p;
    
    for(int i= 0 ; i<t ; i++)
    {
        int a,b;
        cin>>a>>b;

        p.push_back(make_pair(a,b));
    }

    int count1 = 0;
    int count2 = 0;
    int count3 = 0;
    int count4 = 0;
    int count5 = 0;
    int count6 = 0;
    int count7 = 0;
    int count8 = 0;
    int countx = 0;
    int county = 0;

    for(int i= 0; i<p.size();  i++)
    {
        for(int j = 0; j<p.size() ; j++)
        {
            if(i == j)
            {
                continue;
            }
            else
            {
                if((p[i].first == p[j].first))
            {
                if(p[i].second > p[j].second)
                {
                    count1++;
                }
                else if(p[i].second < p[j].second)
                {
                    count2++;
                }
            }

            else if((p[i].second == p[j].second))
            {
                if(p[i].first > p[j].first)
                {
                    count3++;
                }
                else if(p[i].first < p[j].first)
                {
                    count4++;
                }
            }
            }
        }

        //cout<<count1<<" "<<count2<<" "<<count3<<" "<<count4<<endl;

        if(count1 > 0 && count2 > 0 && count3 > 0 && count4 > 0)
        {
            count++;
        }

        

        count1  = 0;
        count2 = 0;
        count3 = 0;
        count4 = 0;
    }

    cout<<count<<endl;



  //  cout<<count1<<" "<<count2<<" "<<count3<<" "<<count4<<endl;

 // cout<<count5<<" "<<count6<<" "<<count7<<" "<<count8<<endl;




    // if((count1 > 0 && count2 >0) && (count3 > 0 && count4 >0))
    // {
        
    // }

   // cout<<countx<<endl;


    // for(int i= 0; i<p.size();  i++)
    // {
    //     cout<<p[i].first<<" "<<p[i].second<<endl;
    // }


}