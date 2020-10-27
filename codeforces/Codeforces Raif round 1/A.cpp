#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define li int64_t

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		li x1,y1,x2,y2;
		cin>>x1>>y1>>x2>>y2;
		int h = abs(x2-x1);
		int v = abs(y2-y1);
		li moves = 0;
		moves = h+v;
		int changes;
		(h == 0 || v == 0)?changes = 0 : changes =2;
		cout<<moves+changes<<endl;
	}	
}