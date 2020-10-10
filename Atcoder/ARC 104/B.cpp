#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define li int64_t

int main()
{
	int n;
	string s;
	cin>>n>>s;
	int a[n],t[n],g[n],c[n];
	if(s[0] == 'A')
	{
		a[0] = 1;
		g[0] = 0;
		c[0] = 0;
		t[0] = 0;
	}
	if(s[0] == 'G')
	{
		a[0] = 0;
		g[0] = 1;
		c[0] = 0;
		t[0] = 0;
	}
	if(s[0] == 'C')
	{
		a[0] = 0;
		g[0] = 0;
		c[0] = 1;
		t[0] = 0;
	}
	if(s[0] == 'T')
	{
		a[0] = 0;
		g[0] = 0;
		c[0] = 0;
		t[0] = 1;
	}
	for(int i=0;i<n;i++)
	{
		if(s[i] == 'A')
		{
			a[i] = a[i-1]+1;
			g[i] = g[i-1];
			c[i] = c[i-1];
			t[i] = t[i-1];
		}
		if(s[i] == 'G')
		{
			a[i] = a[i-1];
			g[i] = g[i-1]+1;
			c[i] = c[i-1];
			t[i] = t[i-1];
		}
		if(s[i] == 'C')
		{
			a[i] = a[i-1];
			g[i] = g[i-1];
			c[i] = c[i-1]+1;
			t[i] = t[i-1];
		}
		if(s[i] == 'T')
		{
			a[i] = a[i-1];
			g[i] = g[i-1];
			c[i] = c[i-1];
			t[i] = t[i-1]+1;
		}
	}	
	int count = 0;
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			int A,G,C,T;
			if(i == 0)
			{
				 A = a[j],G = g[j],C = c[j],T = t[j];
			}
			else
			{
				A = a[j]-a[i-1];
				G = g[j]-g[i-1];
				C = c[j]-c[i-1];
				T = t[j]-t[i-1];
			}
			if(A == T && C == G)
			{
				count++;
			}
		}

	}
	cout<<count<<endl;
}