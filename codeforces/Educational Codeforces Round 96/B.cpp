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
		li n,k,ans;
		cin>>n>>k;
		li a[n];
		for(li i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		if(k == 0)
		{
			ans = a[n-1]-a[0];
		}
		else
		{
			li max = a[n-1];
			li min = 0;
			li i=n-2;
			while(k-- && i>=0)
			{
				max += a[i];
				i--;
			}
			ans = max-min;
		}
		cout<<ans<<endl;
	}	
}