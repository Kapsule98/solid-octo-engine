#include<bits/stdc++.h>
using namespace std;

#define li int64_t

int main()
{
	li n,k;
	cin>>n>>k;
	li a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}	
	sort(a,a+n);
	if(n == 1)
	{
		if(k == 0 && a[0]-1>=1 && a[0]-1<= 1000000000)
		{
			cout<<a[0]-1<<endl;
		}
		if(k == 1 && a[0]+1>=1 && a[0]+1<= 1000000000)
		{
			cout<<a[0]+1<<endl;
		}
	}
	else
	{
		li ans = a[k]-1;
		if(a[k]<= ans || a[k-1] == a[k]  || ans<1 || ans>1000000000 )
		{
			ans = -1;
		}
		
		{
			cout<<ans<<endl;
		}
	}
	
	
}
