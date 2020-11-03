#include<bits/stdc++.h>
using namespace std;

#define li int64_t

int main()
{
	li t;
	cin>>t;
	while(t--)
	{
		li n;
		cin>>n;
		li a[n];
		bool flag = true;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(int i=0;i<n-1;i++)
		{
			if(!(a[i]>a[i+1]))
			{
				flag = false;
			}
		}
		if(flag)
		{
			cout<<"NO\n";
		}
		else{
			cout<<"YES\n";
		}
	}	
}
