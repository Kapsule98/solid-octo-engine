#include<bits/stdc++.h>
using namespace std;

#define li int64_t

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a;
		cin>>a;
		if(360 % (180-a) == 0)
		{
			cout<<"YES\n";
		}
		else
		{
			cout<<"NO\n";
		}
	}	
}
