#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[4]={-1,2,5,0};
    int best=0;
    int sum=0;

    for(int i=0;i<4;i++)
    {
        sum=max(arr[i],sum+arr[i]);
        best=max(best,sum);

    }

    cout<<best<<endl;
    return 0;
}
