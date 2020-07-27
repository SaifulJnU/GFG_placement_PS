#include<bits/stdc++.h>
using namespace std;
///time complexity O(log(n))

void ModuloExponential(int base,int n,int m)///here base mane base e ar n mane power of base, ar m mane koto diye modulo korbo seta.
{
    int result=1;
    while(n>0)
    {
        if(n%2!=0)
        {
            result=(result*base)%m;
            n--;
        }
        else{
            base=(base*base)%m;
            n/=2;
        }
    }
    cout<<result<<endl;
}

int main()
{
    int base,n,m;
    cin>>base>>n>>m;

    ModuloExponential(base,n,m);

    return 0;
}
