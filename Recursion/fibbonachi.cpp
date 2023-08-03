#include<bits/stdc++.h>
using namespace std;

//     0 1 1 2 3 5 8 13 .............

int fibonacci(int n)
{
    if(n == 0)
    {
        return 0;
    }

    if(n == 1)
    {
        return 1;
    }

    else
    {
        int a = fibonacci(n-1) + fibonacci(n-2);
        return a;
    }
}

int main()
{
    int n = 4;
    cout<<fibonacci(n)<<endl;
}