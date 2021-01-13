#include<bits/stdc++.h>
using namespace std;

#define li int64_t

int main()
{
	int n;
	cin>>n;
	li l;
	cin>>l;
	li a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	double ans = 2*max(a[0],l-a[n-1]);
	for(int i=0;i<n-1;i++)
	{
		ans = max(ans,(a[i+1]-a[i])/1.0);
	}
	cout<<setprecision(9)<<fixed<<ans/2.0<<endl;
	
}
