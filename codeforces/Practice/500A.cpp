#include<bits/stdc++.h>
using namespace std;

#define li int64_t

void DFS(vector<vector<int>>graph,int curr,bool visited[])
{
	if(visited[curr])
	{
		return;
	}
	else
	{
		visited[curr] = true;
		for(int i=0;i<graph[curr].size();i++)
		{
			if(graph[curr][i] && !visited[i])
			{
				DFS(graph,i,visited);
			}
		}
	}
}

int main()
{
	int n,t;
	cin>>n>>t;
	int portal[n-1];
	for(int i=0;i<n-1;i++)
	{
		cin>>portal[i];
	}	/*
	vector<vector<int>> graph(n,vector<int>(n,0));
	
	for(int i=0;i<n-1;i++)
	{
		int source = i;
		int dest = i+portal[i];
		graph[source][dest] = 1;
	}
	bool visited[n];
	for(int i=0;i<n;i++)
	{
		visited[i] = false;
	}
	DFS(graph,1,visited);
	if(visited[t-1])
	{
		cout<<"YES\n";
	}
	else
	{
		cout<<"NO\n";
	}*/
	bool visited[n];
	for(int i=0;i<n;i++){
		visited[i] = false;
	}
	visited[0] = true;
	for(int i=0;i<n-1;i++)
	{
		if(visited[i])
		{
			visited[i+portal[i]] = true;
		}
	}
	if(visited[t-1])
	{
		cout<<"YES\n";
	}
	else{
		cout<<"NO\n";
	}

}
