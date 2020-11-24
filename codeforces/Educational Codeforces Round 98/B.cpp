#include<bits/stdc++.h>
using namespace std;

#define li int64_t

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		li a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		li cost = 0;
		for(int i=0;i<n;i++)
		{
			li curr = a[i];
			li max = -1;
			li diff = 0;
			for(int j=0;j<n;j++)
			{
				if(j!=i)
				{
					if(a[j]>max)
					{
						max = a[j];
					}
				}
				
				
			}
			for(int j=0;j<n;j++)
			{
				if(j!=i)
				{
					diff = diff+(max - a[j]);
				}
			}
			li costthisrnd = 0;
			if(diff < curr)
			{
				li extra = curr-diff;
				if(extra % (n-1) == 0)
				{
					costthisrnd = 0;
				}
				else
				{
					costthisrnd = (n-1) - (extra % (n-1));
				}
				
				//cost+= (n-1) - (extra % (n-1));
			}
			else
			{
				costthisrnd = diff-curr;
				//cost+=diff-curr;
			}
			//cout<<"i = "<<i<<"max = "<<max<<"total diff = "<<diff<<"cost = "<<costthisrnd<<endl;
			a[i] = curr+costthisrnd;
			cost += costthisrnd;

		}
		cout<<cost<<endl;
	}
}
	