#include<bits/stdc++.h>
using namespace std;

#define li int64_t

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,a,b,h;
		cin>>n>>a>>b>>h;
		string s;
		cin>>s;
		li ans = -1;
		int o=0,z=0;
		for(int i=0;i<n;i++)
		{
			if(s[i] == '1')
			{
				o++;
			}
			if(s[i] == '0')
			{
				z++;
			}
		}
		if(a == b)
		{
			ans = a*(o+z);
		}
		if(a<b)
		{
			int min = z*a + o*b;
			for(int i=0;i<=o;i++)
			{
				// find z and o
				
				int zero = z+i;
				int one = o-i;
				int change = i*h;
				int cost = a*(zero) + b*(one) + change;
				if(cost<min)
				{
					min = cost;
				}
			}
			ans = min;
		}
		if(b<a)
		{
			int min = z*a + o*b;
			for(int i=0;i<=z;i++)
			{
				
				int zero = z-i;
				int one = o+i;
				int change = h*i;
				int cost = a*zero + b*one + change;
				if(cost<min)
				{
					min = cost;
				}
			}
			ans = min;
		}
		cout<<ans<<endl;
	}	
}
