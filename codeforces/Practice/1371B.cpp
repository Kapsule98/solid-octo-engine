#include<bits/stdc++.h>
using namespace std;

#define li int64_t

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		li n,r;
		cin>>n>>r;
		li x = min(r,n-1);
		li ans = x*(x+1)/2;
		if(r>=n)
		{
			ans++;

		}
		cout<<ans<<endl;
	}	
}
