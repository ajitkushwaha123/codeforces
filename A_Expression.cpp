#include<bits/stdc++.h>
using namespace std;

bool comp(int a, int b)
{
  return (a < b);
}

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int ans = 0;

       int ans1 = (a+b)*c;
       int ans2 = a+(b*c);
       int ans3 = a*(b+c);
       int ans4 = a*b*c;
       int ans5 = a+b+c;

       cout<<max({ans1 , ans2 , ans3 , ans4 , ans5} , comp)<<endl;

}