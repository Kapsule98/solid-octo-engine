#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define li int64_t

int main()
{
	int h,w,m;  
	cin>>h>>w>>m;
	int row[h],col[w],maxr = -1,maxc = -1;				// row[h] stores no of targets on ith row  col[w] on ith col
	for(int i=0;i<h;i++)
	{
		row[i] = 0;
	}
	for(int i=0;i<w;i++)
	{
		col[i] = 0;
	}
	bool grid[h][w];
	map<pair<int,int> , int> ma;
	while(m--)
	{
		int x,y;
		cin>>x>>y;
		pair<int,int> p = make_pair(x-1,y-1);
		ma[p]++;
		grid[x-1][y-1] = true;
		row[x-1]++;
		if(row[x-1]>maxr)maxr = row[x-1];
		col[y-1]++;
		if(col[y-1]>maxc)maxc = col[y-1];
	}
	
	vector<int>r,c;
	for(int i=0;i<h;i++)
	{
		if(row[i] == maxr){r.push_back(i);}
	}
	for(int i=0;i<w;i++)
	{
		if(col[i] == maxc){c.push_back(i);}
	}
	int ans = maxr+maxc-1;
	for(int i=0;i<r.size();i++)
	{
		for(int j=0;j<c.size();j++)
		{
			//cout<<i<<j<<endl;
			pair<int,int> p = make_pair(r[i],c[j]);
			if(ma.find(p) == ma.end())
			{
				//cout<<r[i]<<c[j]<<endl;
				ans = maxr+maxc;
				//cout<<i<<j;
				goto k;
			}
		}
	}
	k:
	cout<<ans<<endl;
	/*int max = -1;
	int count = 0;
	for(int i=0;i<h;i++)
	{
		for(int j=0;j<w;j++)
		{
			count = row[i]+col[j];
			if(grid[i][j])count--;
			if(count>max)max = count;
		}
	}
	cout<<max;
	*/
}