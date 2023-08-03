#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v = {1,2,4,5};

    //Suppose we want to insert 3 after v[1]

    v.insert(v.begin() + 2 , 3);

    for(int i=0; i<v.size() ; i++)
    {
        cout<<v[i]<<" ";
    }
}