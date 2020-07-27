#include<bits/stdc++.h>
using namespace std;
///here any number can be base and any number can be the power but we just have to find the result of it
///time complexity is O(lon(n))
int BinaryExponential(int base,int n)///here base represent as base and n represent as power
{
    int result=1;
    while(n>0)
    {
        if(n%2!=0)//for odd
        {
            result*=base;
            n--;
        }
        else{ //for even
            base*=base;
            n/=2;
        }

    }
     cout<<result<<endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int base,n;
    cin>>base>>n;
    BinaryExponential(base,n);

    }

    return 0;
}
