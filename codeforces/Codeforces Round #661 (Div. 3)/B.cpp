#include<bits/stdc++.h>

#define LLINT_MAX 	9223372036854775807

using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		long long int a[n],b[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(int i=0;i<n;i++)
		{
			cin>>b[i];
		}
		long long int amin = LLINT_MAX,bmin = LLINT_MAX;
		for(int i=0;i<n;i++)
		{
			if(a[i]<amin)amin = a[i];
			if(b[i]<bmin)bmin = b[i];
		}
	
		long long int aops =0,bops=0, ans =0, mini =INT_MAX;
		for(int i=0;i<n;i++)
		{
			aops = a[i]-amin;
			bops = b[i]-bmin;
			mini = min(aops,bops);
			aops -= mini;
			bops-=mini;
			ans+=mini;
			ans+=aops;
			ans+=bops;
		}
		cout<<ans<<endl;
	}	
}