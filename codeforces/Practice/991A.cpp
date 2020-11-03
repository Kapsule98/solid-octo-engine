#include<bits/stdc++.h>
using namespace std;

#define li int64_t

int main()
{
	int a,b,c,n;
	cin>>a>>b>>c>>n;
	int x = a-c;
	int y = b-c;
	int z = c;
	if(x+y+z>=n || x<0 || y<0 || z<0)
	{
		cout<<-1<<endl;
	}	
	else
	{
		cout<<n-(x+y+z)<<endl;
	}
}
