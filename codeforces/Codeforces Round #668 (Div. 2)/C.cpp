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
		int n,k;
		string s;
		cin>>n>>k>>s;
		int zero[n],one[n],qu[n];
		bool flag = false;
		if(s[0] == '0')
		{
			zero[0] = 1;
			one[0] = 0;
			qu[0] = 0;
		}
		if(s[0] == '1')
		{
			zero[0] = 0;
			one[0] = 1;
			qu[0] = 0;
		}
		if(s[0] = '?')
		{
			zero[0] = 0;
			one[0] = 0;
			qu[0] = 1;
		}
		for(int i=1;i<n;i++)
		{
			if(s[i] == '0')
			{
				zero[i] = zero[i-1]+1;
				one[i] = one[i-1];
				qu[i] = qu[i-1];
			}
			if(s[i] == '1')
			{
				zero[i] = zero[i-1];
				one[i] = one[i-1]+1;
				qu[i] = qu[i-1];
			}
			if(s[i] == '?')
			{
				zero[i] = zero[i-1];
				one[i] = one[i-1];
				qu[i] = qu[i-1]+1;
			}
		}
																					
		for(int i=0;i<=n-k;i++)
		{
			int j = i+k-1;
			int z,o,q;
			if(i==0)
			{
				z = zero[j];
				o = one[j];
				q = qu[j];
			}
			else
			{
				z = zero[j]-zero[i-1];
				o = one[j]-one[i-1];
				q = qu[j]-qu[i-1];
			}
			if((o == z && q%2 == 0) || (abs(z-o)<q && (q-abs(o-z))%2 == 0))
			{
				flag = true;
			}
		}																
		if(flag)
		{
			cout<<"YES\n";
		}
		else
		{
			cout<<"NO\n";
		}
	}	
}