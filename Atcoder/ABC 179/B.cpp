#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define li int64_t

int main()
{
	int n;
	cin>>n;
	int a[n],b[n];
	bool flag = false;
	for(int i=0;i<n;i++)
	{
		cin>>a[i]>>b[i];
	}
	for(int i=0;i<n-2;i++)
	{
		if(a[i] == b[i] && a[i+1] == b[i+1] && a[i+2] == b[i+2] )
		{
			flag = true;
		}
	}
	if(flag)
	{
		 cout<<"Yes\n";
	}
	else
	{
		cout<<"No\n";
	}
}