#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define li int64_t

int main()
{
	int n;
	cin>>n;
	ll a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}	
	int odd = 0,even = 0;
	for(int i=0;i<n;i++)
	{
		if(a[i] % 2 == 1)
		{
			odd++;
		}
		else
		{
			even++;
		}
	}
	cout<<min(even,odd);
}