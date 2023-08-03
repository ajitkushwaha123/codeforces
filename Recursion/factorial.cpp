#include<bits/stdc++.h>
using namespace std;

int factorial(int n){

    //Base value 

    if(n==0){
        return 1;
    }

    // Reursive function
    else{
        // int smaller = factorial(n-1);
        int bigger = n*factorial(n-1);


        return bigger;
    }
}
int main(){
    int n;
    cin>>n;

    cout<<factorial(n);
}