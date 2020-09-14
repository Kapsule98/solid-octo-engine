#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define li int64_t

int n;
void DFS(vector<vector<int>> graph, int vertex , bool visited[] ,int component[],int &curr)
{
	visited[vertex] = true;
	component[curr]++;
	for(int i=0;i<n;i++)
	{
		if(!visited[i] && graph[vertex][i] == 1)
		{
			DFS(graph,i,visited,component,curr);			
		}
	}
}

int main()
{
	int m;
	cin>>n>>m;
	vector<vector<int>> graph(n,vector<int>(n,0));
	for(int i=0;i<n;i++)
	{
		graph[i][i] = 1;
	}
	while(m--)
	{
		int x,y;
		cin>>x>>y;
		x--;y--;
		graph[x][y] = 1;
		graph[y][x] = 1;
	}	
	bool visited[n];
	int component[n];
	for(int i=0;i<n;i++)
	{
		visited[i] = false;
		component[i] = 0;
	}
	int curr = 0;
	for(int i=0;i<n;i++)
	{
		if(!visited[i])
		{
			DFS(graph,i,visited,component,curr);
		}
		curr++;
	}
	int max = -1;
	for(int i=0;i<n;i++)
	{
		if(component[i]>max)max = component[i];
	}
	cout<<max;
}
