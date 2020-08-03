#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,a,b,x,y;
	cin>>t;
	while(t--)
	{
		cin>>a>>b>>x>>y;
		int area1 = b*x;
		int area2 = b*(a-x-1);
		int area3 = a*y;
		int area4 = a*(b-y-1);
		int max = area1;
		if(area2>max)max = area2;
		if(area3>max) max = area3;
		if(area4>max) max = area4;
		cout<<max<<endl;
	}	
}