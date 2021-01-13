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
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int even=0,odd =0;
		for(int i=0;i<n;i++)
		{
			if(a[i]%2 == 0)
			{
				even++;
			}
			else
			{
				odd++;
			}
		}
		if(even%2==0 && odd % 2 == 0)
		{
			cout<<"YES\n";
		}
		else
		{
			bool flag = false;
			sort(a,a+n);
			for(int i=0;i<n-1;i++)
			{
				if(a[i] == a[i+1]-1)
				{
					flag = true;
					break;
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
}
