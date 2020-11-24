#include<bits/stdc++.h>
using namespace std;

#define li int64_t

li med(li x)
{
	if(x%2 == 0)
	{
		return x/2;
	}
	else
	{
		return 1+(x/2);
	}
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		li a[n*k];
		for(int i=0;i<n*k;i++)
		{
			cin>>a[i];
		}
		li firstindex = (k*(med(n)-1));
		li gap = n-med(n);
		li ans = 0;
		//cout<<firstindex<<" "<<gap<<" "<<endl;
		li count = k;
		li index = firstindex;
		while(k--)
		{
			ans+=a[index];
			index+=gap+1;
		}
		cout<<ans<<endl;
	}	
}
