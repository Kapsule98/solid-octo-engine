#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,guest;
	cin>>n>>guest;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}	
	unordered_map<int,int> m;
	for(int i=0;i<n;i++)
	{
		m[a[i]]++;
	}
	unordered_map<int,int>::iterator itr;
	int max_freq = INT_MIN;
	for(itr = m.begin();itr!=m.end();itr++)
	{
		if(itr->second >max_freq)max_freq = itr->second;
	}
	int dishes = 0;
	if(max_freq%guest == 0)
	{
		dishes = max_freq/guest;
	}
	else
	{
		dishes = (max_freq/guest) +1;
	}
	int init = dishes*guest;
	int stolen = 0;
	for(itr = m.begin();itr!=m.end();itr++)
	{
		stolen+= init-itr->second;
	}
	cout<<stolen;
}