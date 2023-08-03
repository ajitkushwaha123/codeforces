#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v = {6,28,41,46,70};

    // 41 will be deleted from the vector
    v.erase(v.begin() + 2);  

    // 46 will be deleted from the vector
    v.erase(v.begin() + 2);   

    // 70 will be deleted from the vector
    v.erase(v.begin() + 2);  

    for(int i= 0; i<v.size() ; i++)
    {
        cout<<v[i]<<" ";
    }

}