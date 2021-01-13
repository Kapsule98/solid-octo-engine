#include<bits/stdc++.h>
using namespace std;

#define li int64_t

int main()
{
	li n,k;
	cin>>n>>k;
	if(n == 1)
	{
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}	
		cout<<1<<endl;
	}
	else
	{
		int a[n];
		for(li i=0;i<n;i++)
		{
			cin>>a[i];
		}	
		int sum = 0;
		for(int i=0;i<k;i++)
		{
			sum+=a[i];
		}
		li minindex = 0;
		li minsum = sum;
		int l = 0;
		int r = k-1;
		for(int i=r;i<n-1;i++)
		{
			sum-=a[l];
			l++;
			sum+=a[r+1];
			r++;
			if(sum<minsum)
			{
				minsum = sum;
				minindex = l;
			}
		}
		cout<<minindex+1<<endl;
	}
	
}
