#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

   int a = (k*l)/nl;
  // cout<<a<<endl;

   int b = (c*d);
 //  cout<<b<<endl;

   int u = p/np;

 // cout<<u<<endl;

int ans = 0;
   if((a<b && b<u) || (a<u && u<b) )
   {
    ans = a;
   }
   else if((b<a && a<u) || (b<u && u<a))
   {
  //  cout<<"hi"<<endl;
    ans = b;
   }
   else
   {
     ans = u;
   }
  // cout<<ans<<endl;
   cout<<ans/n<<endl;

  //  cout<<a<<" "<<b<<" "<<c<<endl;
}