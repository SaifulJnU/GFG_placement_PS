#include<bits/stdc++.h>
using namespace std;
///Brutforce O(n)

bool isPrime(int n)
{
    if(n==1)return false;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)return false;
    }
    return true;
}


int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
    cin>>n;

    if(isPrime(n))
    {
        cout<<"prime"<<endl;
    }
    else cout<<"not prime"<<endl;

    }

    return 0;
}
