#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define li int64_t

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		li x,y;
		cin>>x>>y;
		x = x-y;
		if(x == 1)cout<<"NO\n";
		else
		{
			cout<<"YES\n";
		}
	}	
}