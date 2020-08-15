#include<bits/stdc++.h>
using namespace std;

#define ll int64_t

int main()
{
	ll x,k,d,ans;
	cin>>x>>k>>d;


	if(abs(x)>d)
	{
		ll steps = (abs(x))/d;

		if(steps<= k)
		{
			k-=steps;
			if(x>=0)
			{
				x-=d*steps;
			}
			else
			{
				x+=d*steps;
			}
			if(k % 2 == 0)
			{
				ans = x;
			}
			else
			{
				ans = d-abs(x);
			}
		}
		else
		{
			ans = abs(x) - (d*k);
		}
	}
	else
	{
		if(k % 2 == 0)
		{
			ans = abs(x);
		}
		else
		{
			ans = d-abs(x);
		}
	}
	cout<<ans;
	
	
	
}