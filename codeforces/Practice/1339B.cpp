#include<bits/stdc++.h>
using namespace std;

#define li int64_t

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		li n;
		cin>>n;
		li a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		int i= 0;
		int j = n-1;
		vector<li> ans;
		while(i<j)
		{
			ans.push_back(a[i]);
			//cout<<a[i];
			i++;
			ans.push_back(a[j]);
			//cout<<a[j];
			j--;
		}
		if(n%2 ==1)
		{
			ans.push_back(a[n/2]);
		}
		for(int i=n-1;i>=0;i--)
		{
			cout<<ans[i]<<" ";
		}
		cout<<endl;
	}	
}
