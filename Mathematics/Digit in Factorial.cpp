#include<bits/stdc++.h>
using namespace std;
/*Normally it is tough to handle large integer so in this particular case
we can use a mathematical formula to count the digits of factorial.
The formula is called KAMENETSKY formula: x = ((N*log10(N/e))+(log10(2*PI*N)/2.0)).*/

int DigitInFactorial(int N)
{
    double e=2.718;
    double PI=3.1416;
    double x = ((N*log10(N/e))+(log10(2*PI*N)/2.0));
    return floor(x)+1;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
       int result = DigitInFactorial(N);
       cout<<result<<endl;
    }


    return 0;
}
