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
	if(n == 1)
	{
		if(a[0] == 0)
		{
			cout<<1<<endl;
		}
		else
		{
			cout<<0<<endl;
		}
	}
	else
	{
		int max = 0;
		for(int i=0;i<n;i++)
		{
			for(int j=i;j<n;j++)
			{
				int count = 0;
				for(int k = 0;k<i;k++)
				{
					if(a[k] == 1)
					{
						count++;
					}
				}
				for(int k = i;k<=j;k++)
				{
					if(a[k] == 0)
					{
						count++;
					}
				}
				for(int k = j+1;k<n;k++)
				{
					if(a[k] == 1)
					{
						count++;
					}
				}
				if(count>max)
				{
					max = count;
				}
			}
		}
		cout<<max<<endl;
	}
	
}
