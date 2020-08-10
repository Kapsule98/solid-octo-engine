#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,k;
		cin>>n>>k;
		long long int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		long long int ans = -1,dist = LONG_MAX;
		for(int i=0;i<n;i++)
		{
			if(k%a[i] == 0 && (k/a[i]) < dist)
			{
				dist = k/a[i];
				ans = a[i];
			}

		}
		cout<<ans<<endl;
	}	
}