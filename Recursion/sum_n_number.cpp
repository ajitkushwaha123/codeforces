#include<bits/stdc++.h>
using namespace std;

int sum(int n)
{
    
    if(n == 0)
    {
        return 0;
    }
    else
    {
        int b  =  n+ sum(n-1);
        return b;
    }


}

int main()
{
    int n = 5;
    
    cout<<sum(n);
}