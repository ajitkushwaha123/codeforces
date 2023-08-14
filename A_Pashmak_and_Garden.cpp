#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    int p = 0,q = 0,r = 0,s = 0;

    if(b == d)
    {
        p = a;
        r = c;

        q = sqrt((a-c)*(a-c) + (b-d)*(b-d) - (p-a)*(p-a)) + b;
        s = sqrt((a-c)*(a-c) + (b-d)*(b-d) - (r-c)*(r-c)) + d;

        cout<<p<<" "<<q<<" "<<r<<" "<<s<<endl;
    }
    else if(a == c)
    {
        q = b;
        s = d;

        p = sqrt((a-c)*(a-c) + (b-d)*(b-d) - (q-b)*(q-b)) + a;
        r = sqrt((a-c)*(a-c) + (b-d)*(b-d) - (s-d)*(s-d)) + c;

        cout<<p<<" "<<q<<" "<<r<<" "<<s<<endl;
    }

    else if(a != c && b != d)
    {
        p = a;
        q = d;
        r = c;
        s = b;

        int s1 = abs((a-r)*(a-r) - (b-s)*(b-s));
        int s2 = abs((r-c)*(r-c) - (s-d)*(s-d));
        int s3 = abs((c-p)*(c-p) - (d-q)*(d-q));
        int s4 = abs((p-a)*(p-a) - (q-b)*(q-b));

        if(s1 == s2 && s2 == s3 && s3 == s4 && s4 == s1)
        {
           cout<<p<<" "<<q<<" "<<r<<" "<<s<<endl;   
        }
        else
        {
            cout<<"-1"<<endl;
        }
    }

    else 
    {
        cout<<"-1"<<endl;
    }

}


 