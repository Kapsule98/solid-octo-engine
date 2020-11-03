#include<bits/stdc++.h>
using namespace std;

#define li int64_t

int main()
{
	li n,k;
	cin>>n>>k;
	li max = -10000000001;
	for(int i=0;i<n;i++)
	{
		li f,t;
		cin>>f>>t;
		li fun;
		if(t<=k)
		{
			fun = f;
		}
		else
		{
			fun = f- (t-k);
		}
		if(fun>max)
		{
			max = fun;
		}
	}	
	cout<<max;
}
