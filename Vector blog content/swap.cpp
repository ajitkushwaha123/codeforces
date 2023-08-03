#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v = {1,2,4,3,5};

    // now we want to swap 4,3 to make this array sorted
    swap(v[2] , v[3]);

    for(int i=0; i<v.size() ; i++)
    {
        cout<<v[i]<<" ";
    }
}