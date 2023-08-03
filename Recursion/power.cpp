#include<bits/stdc++.h>
using namespace std;

int power(int n)
{
    if(n == 0)
    {
        return 1;     
    }

    else
    {
        int answer = 2*power(n-1);

        return answer;
    }
}

int main()
{
    int n;
    cin>>n;

    cout<<power(n);
}