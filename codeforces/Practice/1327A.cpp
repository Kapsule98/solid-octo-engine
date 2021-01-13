#include<bits/stdc++.h>
using namespace std;

#define li int64_t

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		li n,k;
		cin>>n>>k;
		if(k%2 == 0 && n % 2 ==1)
		{
			cout<<"NO\n";
		}
		else if(k%2 == 1 && n%2 == 0)
		{
			cout<<"NO\n";
		}
		else
		{
			if(n<k*k )
			{
				cout<<"NO\n";
			}
			else
			{
				cout<<"YES\n";
			}
		}
	}	
}
