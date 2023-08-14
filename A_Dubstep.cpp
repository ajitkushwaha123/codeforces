#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;

    regex p("WUB");

   string ans = regex_replace(s, p , " ");
  

   for(int i = 0; i<ans.length() ; i++)
   {
     if(ans[i] == ' ' && ans[i+1] == ' ')
     {
        ans.erase(ans.begin() + i);
        i--;
     }
   }

   for(int i = 0; i<ans.length() ; i++)
   {
     cout<<ans[i];
   }
   
}