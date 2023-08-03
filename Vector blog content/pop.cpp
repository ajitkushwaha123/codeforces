#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v = {6,28,41,46,70};

    v.pop_back(); 
    //it will delete the last element from the vector

    for(int i =0; i<v.size() ; i++)
    {
        cout<<v[i]<<" ";
    }

    v.pop_back(); 
    v.pop_back(); 

    //deleted two more element from the vector

    cout<<endl;
    
    for(int i =0; i<v.size() ; i++)
    {
        cout<<v[i]<<" ";
    }

}