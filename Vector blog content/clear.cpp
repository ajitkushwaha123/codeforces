#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v = {1,2,4,5};

    v.clear();
    // v.clear() is deleting all the elements of vector 

    v.push_back(6);
    v.push_back(28);

    // now only 6 and 28 will be in vector
    
    for(int i = 0; i<v.size() ; i++)
    {
        cout<<v[i]<<" ";
    }
}