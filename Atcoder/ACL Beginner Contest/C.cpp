#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define li int64_t

void DFS(vector<vector<int>>g,int curr,bool visited[])
{
	
		
		visited[curr] = true;
		for(int i=0;i<g[curr].size();i++)
		{
			if(!visited[i] && g[curr][i] == 1)
			{
				DFS(g,i,visited);
			}
		}
	
}

int main()
{
	int n,m;
	cin>>n>>m;
	vector<vector<int>>g(n,vector<int>(n,0));
	int x,y;
	for(int i=0;i<m;i++)
	{
		cin>>x>>y;
		g[x-1][y-1] = 1;
		g[y-1][x-1] = 1;
	}
	bool visited[n];
	for(int i=0;i<n;i++)
	{
		visited[i] = false;
	}
	int count = 0;
	for(int i=0;i<n;i++)
	{
		if(visited[i] == false)
		{
			DFS(g,i,visited);
			count++;
		}
	}
	cout<<count-1;
}