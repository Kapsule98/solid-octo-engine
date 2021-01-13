#include<bits/stdc++.h>
using namespace std;

#define li int64_t

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		li n,k;
		cin>>n>>k;
		li p = n-1;
		if(k%p == 0)
		{
			li x = k/p;
			li curr = n*x -1;
			cout<<curr<<endl;
		}
		else
		{
			li x = k/p;
			li curr = n*x;
			li count = k - (p*x);
			curr = curr+count;
			cout<<curr<<endl;
		}
	}	
}
