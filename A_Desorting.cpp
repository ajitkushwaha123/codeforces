#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        long long n;
        cin>>n;

        vector<int> v;

        for(int i = 0; i<n ; i++)
        {
            long long ele;
            cin>>ele;

            v.push_back(ele);
        }

        long min = abs(v[0]-v[1]);
        long dif =0 , index = 0  , count = 0;
    
        for(int i= 0; i<v.size()-1 ; i++)
        {   

            if(v[i] > v[i+1])
            {
                count++;
            }

           else
           {
            dif = abs(v[i] - v[i+1]);

                if(dif <= min)
                {

                    min = dif;
                    index  = i;

                }
           }
        }

//    cout<<v[index]<<" "<<v[index + 1]<<endl;


   int m = v[index];
   int k= v[index + 1];

   if(count >0)
   {
    cout<<"0"<<endl;
   }

   else if((abs(m-k) )% 2 == 1)
   {
    cout<<(abs(m-k)+1)/2<<endl;
   }
   else if((abs(m-k)) % 2 == 0)
   {
    cout<<(abs(m-k))/2 + 1<<endl; 
   }

   



 }
}