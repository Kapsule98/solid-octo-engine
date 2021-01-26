#include<bits/stdc++.h>
using namespace std;

#define li int64_t

int main()
{
	int t;
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
		int index = 0;
		li ans = a[0]+a[0];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(i == 0 && j == 0)
				{

				}
				else
				{
					ans = ans ^ (a[i]+a[j]);	
				}
				
			}
		}
		cout<<ans<<endl;
	
	}	
}
