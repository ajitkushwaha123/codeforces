#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> w = {1,2,3,4,5};

    // w.begin() + 0 => tell us the initial position 
    //w.begin() + 2 => end point of the vector till their vector needed to be delete

    w.erase(w.begin() + 0 ,w.begin()+2);

    for(int i=0; i<w.size() ; i++)
    {
        cout<<w[i]<<" ";
    }
}