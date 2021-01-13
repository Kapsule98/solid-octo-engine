#include<bits/stdc++.h>
using namespace std;

#define li int64_t

int main()
{
	li t;
	cin>>t;
	while(t--)
	{
		li n;
		cin>>n;
		li a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		li max = -1;
		li sum = 0;
		li negmax = -99999999999;
		int i = 0;
		while(i<n)
		{
			if(a[i]>0)
			{
				while(a[i]>0 && i<n)
				{
					if(a[i]>max)
					{
						max = a[i];
					}
					i++;
				}
				//cout<<max<<" ";
				sum+=max;
				max = -1;
			}
			if(a[i]<0)
			{
				while(a[i]<0 && i<n)
				{
					if(a[i]>negmax)
					{
						negmax = a[i];
					}
					i++;
				}
				//cout<<negmax<<" ";
				sum+= negmax;
				negmax = -99999999999;
			}
		}
		cout<<sum<<endl;
	}	
}
