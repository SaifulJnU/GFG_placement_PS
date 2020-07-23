#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int sum_of_harmonic_progressionm = log2(n)+1;///it is for upper bound and in this case the series look like: 1 + 1/2 + 1/3 + 1/4 +......+1/n
    cout<<sum_of_harmonic_progressionm<<endl;

    return 0;
}
