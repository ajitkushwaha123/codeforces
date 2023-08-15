#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;

    string zero = "O-|-OOOO";
    string one =  "O-|O-OOO";
    string two = "O-|OO-OO";
    string three = "O-|OOO-O";
    string four = "O-|OOOO-";
    string five = "-O|-OOOO";
    string six = "-O|O-OOO";
    string seven = "-O|OO-OO";
    string eight = "-O|OOO-O";
    string nine = "-O|OOOO-";

    for(int i= s.length() - 1; i>=0 ; i--)
    {
        if(s[i] == '0')
        {
            cout<<zero<<endl;
        }
        if(s[i] == '1')
        {
            cout<<one<<endl;
        }
        if(s[i] == '2')
        {
            cout<<two<<endl;
        }
        if(s[i] == '3')
        {
            cout<<three<<endl;
        }
        if(s[i] == '4')
        {
            cout<<four<<endl;
        }
        if(s[i] == '5')
        {
            cout<<five<<endl;
        }
        if(s[i] == '6')
        {
            cout<<six<<endl;
        }
        if(s[i] == '7')
        {
            cout<<seven<<endl;
        }
        if(s[i] == '8')
        {
            cout<<eight<<endl;
        }
        if(s[i] == '9')
        {
            cout<<nine<<endl;
        }
    }

}