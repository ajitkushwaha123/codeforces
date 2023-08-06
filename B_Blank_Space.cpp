#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        vector<int> v;
        for(int i= 0; i<n ; i++)
        {
            int ele;
            cin>>ele;

            v.push_back(ele);
        }


        int count = 0;
        int temp = 0;

        int max =0;

        for(int i =0; i<v.size() ; i++)
        {
            if(v[i] == 1)
            {

                count = 0;
                continue;         
            } 
            else
            {
                count++;
            }

            if(max < count)
            {
                max = count;
            }


        }
        
         cout<<max<<endl;
    }
}