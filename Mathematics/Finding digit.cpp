#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c=0;
    int  n;
    cin>>n;
   int temp=n;
    while(temp!=0)
    {
        c++;
        temp = temp/10;

    }
    cout<<c<<endl;

    return 0;
}
