#include<bits/stdc++.h>
using namespace std;

#define li int64_t

int main()
{
	string s;
	cin>>s;
	int n;
	cin>>n;

	int a[s.length()];
	for(int i=0;i<s.length()-1;i++)
	{
		if(s[i] == s[i+1])
		{
			a[i] = 1;
		}
		else
		{
			a[i] = 0;
		}
	}
	int p[s.length()];
	p[0] = a[0];
	for(int i=0;i<s.length()-1;i++)
	{
		p[i+1] = p[i]+a[i+1];
	}
	for(int i=0;i<n;i++)
	{
		int a,b;
		cin>>a>>b;
		a--;b--;
		int ans = -1;
		if(a!=0)
		{
			ans = p[b-1]-p[a-1];
		}
		else
		{
			ans = p[b-1];
		}
		cout<<ans<<endl;
	}	
}
