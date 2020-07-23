#include<bits/stdc++.h>
using namespace std;
int main()
{
    int number;
    cin>>number;


    int digit_in_Anumber = floor(log10(number))+1; ///ekhane must long 10 base dite hobe.

    cout<<digit_in_Anumber<<endl;

    return 0;
}
