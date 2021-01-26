#include<bits/stdc++.h>
using namespace std;

#define li int64_t

int main()
{
	int n,x;
	cin>>n>>x;
	int k = 0;
	int ans = -1;
	for(int i=1;i<=n;i++)
	{
		int v,p;
		cin>>v>>p;
		k = k+ v*p;
		//cout<<k<<endl;
		if(k>x*100)
		{
			ans = i;
			break;
		}
	}	
	cout<<ans<<endl;
}
