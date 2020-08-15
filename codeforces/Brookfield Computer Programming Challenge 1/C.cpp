#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,s;
		cin>>n>>s;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		bool f = false;
		for(int i=1;i<n;i++)
		{
			int diff = a[i]-a[i-1];
			if(diff<s)
			{
				f = true;
				break;
			}
		}
		if(f)
		{
			cout<<"YES\n";
		}
		else
		{
			cout<<"NO\n";
		}
	}	
}