// C++ program to find smallest number evenly divisible by
// all numbers 1 to n
#include<bits/stdc++.h>
using namespace std;

// Function returns the lcm of first n numbers
long long lcm(long long n)
{
	long long ans = 1;
	for (long long i = 1; i <= n; i++)
    {
        ans = (ans * i)/(__gcd(ans, i));
        int as=ans;
                cout<<as<<" ";

    }

	return ans;
}

// Driver program to test the above function
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       long long n ;
	cin>>n;
	cout << lcm(n);
    }

}
