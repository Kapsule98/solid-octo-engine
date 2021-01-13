#include<bits/stdc++.h>
using namespace std;

#define li int64_t

int main()
{
	int n,m,a,b;
	cin>>n>>m>>a>>b;
	if(a*m <= b)
	{
		cout<<a*n<<endl;
	} 
	else if(b< a*m)
	{
		if(n%m == 0)
		{
			cout<<b*(n/m);
		}
		else
		{
			int s = b*(n/m) + a*(n-(n/m)*m);
			cout<<min(b*((n/m)+1),s);
		}
	}	
	
	
}
