#include<bits/stdc++.h>
using namespace std;

///time complexity O(n^3)

int main()
{
    int best=0;
   int arr[4]={-1,2,5,0};


    for(int i=0;i<4;i++)
    {
        int sum = 0;

        for(int j=i;j<4;j++)
        {

            sum+=arr[j];

            best = max(best,sum);
        }
    }
    cout<<best<<endl;
    return 0;
}

