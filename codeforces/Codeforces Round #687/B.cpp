#include<bits/stdc++.h>
using namespace std;

#define li int64_t

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		vector<int> counts;
		for(int i=1;i<=100;i++)
		{
			int count = 0;
			for(int j = 0;j<n;j++)
			{
				if(a[j] != i)
				{
					count++;
					j = j+k-1;
				}
			}
			counts.push_back(count);
		}
		int ans = n+1;
		for(int i=0;i<counts.size();i++)
		{
			ans = min(ans,counts[i]);
		}
		cout<<ans<<endl;
	}	
}
