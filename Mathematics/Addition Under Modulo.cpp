#include<bits/stdc++.h>
using namespace std;

int SumUnderModulo(long long a, long long b)
{
    ///(a+b)%m=(a%m+b%m)%m; where m can be 100000007
    long long M=1000000007;
    return (a%M+b%M)%M;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b;
        cin>>a>>b;

        long long result = SumUnderModulo(a,b);
        cout<<result<<endl;
    }
    return 0;
}
