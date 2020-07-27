#include<bits/stdc++.h>
using namespace std;
///1 to n prime
///time complexity O(nlog(lon(n)))

int marked[100000];

int isPrime(int n)
{
    if(n==1)return 0;

    for(int i=2;i*i<n;i++)
    {
        if(marked[i]==0)
        {
            for(int j=i*i;j<n;j+=i)
            {
                marked[j]=1;
            }
        }
    }

    for(int i=1;i<n;i++)
    {
        if(marked[i]==0)cout<<i<<endl;
    }
}



int main()
{
    int n;
    cin>>n;
    isPrime(n);

    return 0;
}
