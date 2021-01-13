#include<bits/stdc++.h>
using namespace std;

#define li int64_t

int main()
{
	int n,m;
	cin>>n>>m;
	vector<pair<string,string>> v;
	for(int i=0;i<m;i++)
	{
		string x,y;
		cin>>x>>y;
		v.push_back(make_pair(x,y));
		
	}
	vector<string> s;
	for(int i=0;i<n;i++)
	{
			string a;
			cin>>a;
			s.push_back(a);
	}
	vector<string> ans;
	for(int i=0;i<s.size();i++)
	{
		string x = s[i];
		for(int i=0;i<v.size();i++)
		{
			if(v[i].first == x || v[i].second == x)
			{
				string k;
				if(v[i].first.length()<= v[i].second.length())
				{
					k = v[i].first;
				}
				else
				{
					k = v[i].second;
				}
				ans.push_back(k);
			}
		}
	}
	for(int i=0;i<ans.size();i++)
	{
		cout<<ans[i]<<" ";
	}
	cout<<endl;
}
	