#include<bits/stdc++.h>
using namespace std;

#define li int64_t

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		li a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		bool dist = true;
		for(int i=0;i<n-1;i++)
		{
			if(a[i] == a[i+1])
			{
				dist = false;
			}
		}
		if(dist)
		{
			cout<<"NO\n";
		}
		else
		{
			cout<<"YES\n";
		}
	}	
}
