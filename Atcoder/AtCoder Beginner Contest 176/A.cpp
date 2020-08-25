#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define li int64_t

int main()
{
	int n,x,t;
	cin>>n>>x>>t;
	ll ans = 0;
	if(n % x == 0)
	{
		ans = (n/x)*t;
	}	
	else
	{
		ans = ((n/x)+1)*t;
	}
	cout<<ans;
}