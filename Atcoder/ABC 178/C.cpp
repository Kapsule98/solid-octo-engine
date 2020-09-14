#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define li int64_t
#define mod 1000000007
int main()
{
	li n;
	cin>>n;
	li first = (n*(n-1)) % mod;
	cout<<first<<endl;
	li second = 1;
	li p = n-2;
	
	while(p-10>0)
	{
		second*=10000000000;
		second = second % mod;
		p-= 10;
	}
	while(p--)
	{
		second*= 10;
		second = second % mod;
	}
	cout<<second<<endl;
	li ans = ((first % mod) * (second % mod)) % mod;
	cout<<ans;
}