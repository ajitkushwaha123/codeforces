#include<iostream>
#include<vector>
using namespace std;
int main()
{
    
    vector<int> v; 

    //Pushing element in the vector

    v.push_back(6);
    v.push_back(28);
    v.push_back(41);
    v.push_back(46);
    v.push_back(70);

    //Printing the vector using for loops

    for(int i = 0; i<v.size() ; i++)
    {
        cout<<v[i]<<" ";
    }

}