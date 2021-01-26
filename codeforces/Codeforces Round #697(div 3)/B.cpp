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
		bool flag = false;
		for(int i=0;i<n/100;i++)
		{
			for(int j=0;j<n/100;j++)
			{
				if(i*2020 + j*2021 == n && (!(i ==0 & j ==0)))
				{
					flag = true;
				}
			}
		}
		if(flag)
		{
			cout<<"YES\n";
		}
		else
		{
			cout<<"NO\n";
		}
	}	
}
