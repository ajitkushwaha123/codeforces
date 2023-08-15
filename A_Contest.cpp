#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    double ajit  = (3*a)/10;
    double kushwaha = (a - ((a/250)*c));

   double sneha  = (3*b)/10;
   double vats = (b - ((b/250)*d));

    int sn = max(ajit , kushwaha);

    int aj = max(sneha , vats);
   // cout<<sn<<" "<<aj<<endl;

    if(sn < aj)
    {
        cout<<"Vasya"<<endl;
    }
    else if(sn > aj)
    {
        cout<<"Misha"<<endl;
    }
    else if(sn == aj ){
        cout<<"Tie"<<endl;
    }


}