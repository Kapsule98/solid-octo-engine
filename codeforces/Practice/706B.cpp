#include<bits/stdc++.h>
using namespace std;

#define li int64_t

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}	
	sort(a,a+n);
	int q;
	cin>>q;
	for(int i=0;i<q;i++)
	{
		li m;
		cin>>m;
		int start =0;
		int end = n-1;
		int ans = -1;
		while(start<=end)
		{
			int mid = (start+end)/2;
			if(a[mid]>m)
			{
				end = mid-1;
			}
			else
			{
				start = mid+1;
				ans = mid;
			}
		}
		cout<<ans+1<<endl;
	}
}
