#include<bits/stdc++.h>
using namespace std;

#define li int64_t

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x,y;
		cin>>x>>y;
		int h = abs(x);
		int v = abs(y);
		int ans = -1;
		if(abs(h-v)<=1)
		{
			ans = h+v;
		}
		else
		{
				//ans = h+h+1;
				ans = 2*min(v,h)+1;
				ans+= 2*(abs(v-h)-1);
		}
		cout<<ans<<endl;
	}	
}
