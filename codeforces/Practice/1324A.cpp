#include<bits/stdc++.h>
using namespace std;

#define li int64_t

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		li x,y,a,b;
		cin>>x>>y>>a>>b;
		li ans;
		if(2*a<=b)
		{
			// do independently
			ans = a*abs(x) + a*abs(y);
		}
		else
		{
			if(x*y >= 0)
			{
				ans = b*min(abs(x),abs(y)) + a*abs(x-y);
				ans = min(ans,a*abs(x) + a*abs(y));
			}
			else
			{
				ans = a*abs(x) + a*abs(y);
				ans = min(ans , b*abs(x) + a*(abs(x)+abs(y)));
				ans  = min(ans,b*abs(y) + a*(abs(x)+abs(y)));
			}
		}
		cout<<ans<<endl;
	}	
}
