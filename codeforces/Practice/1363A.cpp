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
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int even = 0,odd = 0;
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
		bool flag = false;
		for(int i=1;i<=odd;i+=2)
		{
			if((x-1)<=even)
			{
				flag = true;
				break;
			}
		}
		if(flag)
		{
			cout<<"Yes\n";
		}
		else
		{
			cout<<"No\n";
		}

	}	
}
