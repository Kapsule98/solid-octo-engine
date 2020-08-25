#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define li int64_t

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll a,b,c,d;
		cin>>a>>b>>c>>d;
		ll ans = -1;
		if(b>=a)ans = b;
		else
		{
			if(c<=d)ans = -1;
			else
			{
				if((a-b)%(c-d) == 0)ans = (c*((a-b)/(c-d)))+b;
				else
				{
					ans = ((1+((a-b)/(c-d)))*c) + b;
				}
			}
		}
		cout<<ans<<endl;
	}	
}