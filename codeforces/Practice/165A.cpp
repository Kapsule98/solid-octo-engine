#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,x,y;
	cin>>n;
	map<pair<int,int>,int> m;
	vector<pair<int,int>> v;
	for(int i=0;i<n;i++)
	{
		cin>>x>>y;
		pair<int,int>p;
		m[make_pair(x,y)]++;
		v.push_back(make_pair(x,y));
	}	
	int count =0;
	for(int i=0;i<v.size();i++)
	{
		x=v[i].first;
		y=v[i].second;
		pair<int,int> top,right,left,down;
		top = make_pair(x-1,y);
		down = make_pair(x+1,y);
		right = make_pair(x,y+1);
		left = make_pair(x,y-1);
		if(m.find(top)!=m.end() && m.find(right)!=m.end() && m.find(left)!=m.end() && m.find(down)!=m.end())
		{
			count++;
		}
	}
	cout<<count;


}