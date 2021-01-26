#include<bits/stdc++.h>
using namespace std;

#define li int64_t

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,a,b,c;
		cin>>n>>a>>b>>c;
		li ans = 0;
		for(int i=0;i<=a;i++)
		{
			for(int j=0;j<=b;j++)
			{
				for(int k = 0;k<=c;k++)
				{
					if(i+j+k <= n)
					{
						ans++;
					}
				}
			}
		}
		cout<<ans<<endl;
	}	
}
