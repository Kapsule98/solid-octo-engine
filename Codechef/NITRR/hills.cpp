#include<bits/stdc++.h>
using namespace std;

#define li int64_t

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		li n,u,d;
		cin>>n>>u>>d;
		li a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		li ans = n-1;
		bool para = true;
		for(int i=0;i<n-1;i++)
		{
			li diff = a[i+1]-a[i];
			//cout<<diff;
			if((diff>0 && diff<=u ) || (diff<=0 && diff<=d))
			{

			}
			else if(diff>0 && diff > u)
			{
				ans = i;
				break;
			}
			else if(diff<=0 && diff>d && para)
			{
				para = false;
			}
			else if(diff<=0 && diff>d && !para)
			{
				ans = i;
				break;
			}
			else
			{
				//make the jump
			}
		}
		cout<<ans+1<<endl;
	}	
}
