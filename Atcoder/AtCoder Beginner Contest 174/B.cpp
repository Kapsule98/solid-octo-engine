#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,d;
	cin>>n>>d;
	int count = 0;
	while(n--)
	{
		int x,y;
		cin>>x>>y;
		if(x*x + y*y <= d*d)
		{
			count++;
		}
	}	
	cout<<count;
}