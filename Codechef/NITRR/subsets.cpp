#include<bits/stdc++.h>
using namespace std;

#define li int64_t

bool solve(li a[])
{
	li sum = a[0]+a[1]+a[2]+a[3];
	for(int i=0;i<4;i++)
	{
		if(a[i] == 0)
		{
			return true;
		}
	}
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			if(i != j && a[i]+a[j] == 0)
			{
				return true;
			}
		}
	}
	for(int i=0;i<4;i++)
	{
		if(sum - a[i] == 0)
		{
			return true;
		}
	}
	if(sum == 0)
	{
		return true;
	}
	return false;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		li a[4];
		for(int i=0;i<4;i++)
		{
			cin>>a[i];
		}
		if(solve(a))
		{
			cout<<"Yes\n";
		}
		else
		{
			cout<<"No\n";
		}
	}	
}

