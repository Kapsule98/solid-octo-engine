#include<bits/stdc++.h>
using namespace std;

#define li int64_t

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		unordered_map<int,int> hash;
		for(int i=0;i<n;i++)
		{
			hash[a[i]]++;
		}
		unordered_map<int,int>::iterator itr;
		vector<int> unique;
		for(itr = hash.begin();itr!=hash.end();itr++)
		{
			if(itr->second == 1)
			{
				unique.push_back(itr->first);
			}
		}
		if(unique.size() == 0)
		{
			cout<<-1<<endl;
		}
		else
		{
			sort(unique.begin(),unique.end());
			int ans = unique[0];
			//find index of ans in a
			for(int i=0;i<n;i++)
			{
				if(a[i] == ans)
				{
					cout<<i+1<<endl;
				}
			}
		}
		
	}	
}
