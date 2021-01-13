#include<bits/stdc++.h>
using namespace std;

#define li int64_t

int main()
{
	int n;
	cin>>n;
	li a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}	
	li b[n];
	for(int i=0;i<n-1;i++)
	{
		cin>>b[i];
	}

	li c[n];
	for(int i=0;i<n-2;i++)
	{
		cin>>c[i];
	}
	
	sort(a,a+n);
	sort(b,b+(n-1));
	sort(c,c+(n-2));
	li ans = -1;
	bool found = false;
	for(int i=0;i<n-1;i++)
	{
		if(a[i]!=b[i])
		{
			found = true;
			ans = a[i];
			break;
		}
	}
	if(found)
	{
		cout<<ans<<endl;
	}
	else
	{
		cout<<a[n-1]<<endl;
	}
	ans = -1;
	found = false;
	for(int i=0;i<n-2;i++)
	{
		if(b[i]!=c[i])
		{
			ans = b[i];
			found = true;
			break;
		}
	}
	if(found)
	{
		cout<<ans<<endl;
	}
	else
	{
		cout<<b[n-2]<<endl;
	}
}
