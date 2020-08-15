#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		char x;
		bool allone = true;
		for(int i=0;i<n;i++)
		{
			cin>>x;
			if(x!='1')
			{
				allone = false;
			}
			a[i] = (int)(x-'0');
		}
		if(n == 1)
		{
			if(a[0] == 1){cout<<1<<endl;}
			else
			{
				cout<<0<<endl;
			}
		}
		else if(allone)
		{
			cout<<(n*(n+1))/2;
		}
		else
		{


			long long prefixsum[n];
			prefixsum[0] = a[0];
			for(int i=1;i<n;i++)
			{
				prefixsum[i] = prefixsum[i-1]+a[i];
			}
			int count =0;
			for(int i=0;i<n-1;i++)
			{
				for(int j=i+1;j<n;j++)
				{
					int len = j-i+1;
					int sum = prefixsum[j]-prefixsum[i]+a[i];
					if(sum == len)
					{
						count++;
					}
				}
			}
			for(int i=0;i<n;i++)
			{
				if(a[i] == 1)count++;
			}
			cout<<count<<endl;

		}	
	}	
}