#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define li int64_t

bool compare(pair<int,int> a,pair<int,int>b)
{	
	return (a.second < b.second);
}

int main()
{
	int n;
	cin>>n;
	int k;
	pair<int,int> a[n];
	for(int i=0;i<n;i++)
	{
		cin>>k;
		a[i] = make_pair(i,k);
	}	
	sort(a,a+n,compare);
	int x = 0;
	int cost = 0;
	for(int i=n-1;i>=0;i--)
	{
		cost += x*a[i].second + 1;
		x++;
	}
	cout<<cost<<endl;
	for(int i=n-1;i>=0;i--)
	{
		cout<<a[i].first+1<<" ";
	}
}