#include<bits/stdc++.h>
using namespace std;

#define li int64_t

int main()
{
	li n;
	cin>>n;
	li a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}	
	li b[n];
	b[0] = a[0];
	for(int i=1;i<n;i++)
	{
		b[i] = b[i-1]+a[i];
	}
	cout<<endl;
	int m;
	cin>>m;
	while(m--)
	{
		li x;
		cin>>x;
		li l = 0;
		li r = n-1;
		li ans = -1;
		bool flag = false;
		while(r>=l)
		{
			li mid = (l+r)/2;
			//cout<<endl<<mid<<endl;
			if(b[mid] == x)
			{
				ans = mid;
				flag = true;
				break;
			}
			if(b[mid]<x)
			{
				ans = mid;
				l = mid+1;
			}
			if(b[mid]>x)
			{
				r = mid-1;
			}

		}
		if(ans == -1)
		{
			cout<<1<<endl;
		}
		else if(flag)
		{
			cout<<ans+1<<endl;
		}
		else
		{
			cout<<ans+2<<endl;
		}
		
	}
}
