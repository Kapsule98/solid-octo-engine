#include<bits/stdc++.h>
using namespace std;

#define li int64_t

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		int a[n];
		int ans = -1;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		bool collected[n+x+1];
		for(int i=1;i<=n+x;i++)
		{
			collected[i] = false;
		}
		for(int i=0;i<n;i++)
		{
			collected[a[i]] = true;
		}
		for(int i=1;i<=n+x;i++)
		{
			//cout<<collected[i];
		}
		for(int i=n+x;i>0;i--)
		{
			int blank = 0;
			for(int j=1;j<=i;j++)
			{
				if(!collected[j])
				{
					//cout<<j<<" ";
					blank++;
				}
			}
			if(blank<=x)
			{
				ans = i;
				break;
			}
		}
		cout<<ans<<endl;
	}	
}
