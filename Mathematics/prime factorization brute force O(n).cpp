#include<bits/stdc++.h>
using namespace std;
///find prime factorization and present it with exponential mane dori 12 er prime factorization ber korbo to seta
///hobe 2,2,3 but we have to present like (2^2)(2 ace 2times), (3^1)(ar 3 ace 1 time)
///here time complexity O(n)
int primefactorization(int n)
{
   for(int i=2;i<=n;i++)
   {
       if(n%i==0)
       {
           int cnt=0;
           while(n%i==0)
              {
                 cnt++;
                 n/=i;
              }
              cout<<i<<"^"<<cnt<<endl;
       }
   }

  // if(n>1)cout<<n<<"^"<<1<<endl;
}

int main()
{
    int n;
    cin>>n;

    primefactorization(n);
    return 0;
}
