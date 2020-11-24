#include<bits/stdc++.h>
using namespace std;

#define li int64_t

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		char a[n][n];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cin>>a[i][j];
			}
		}
		int p,q,r,s;
		p = (int)(a[0][1]-'0');			// 1,2
		q = (int)(a[1][0] - '0');		// 2,1
		r = (int)(a[n-1][n-2] - '0'); 	// n,n-1
		s = (int)(a[n-2][n-1] - '0');	// n-1,n
		if(p == q && r == s && p!=r)
		{
			cout<<0<<endl;
		}
		if(p == q && r == s && p == r)
		{
			cout<<2<<endl;
			cout<<1<<" "<<2<<endl;
			cout<<2<<" "<<1<<endl;
		}
		else
		{
			if(p == q && q == r && r != s)
			{
				//change r
				cout<<1<<endl;
				cout<<n<<" "<<(n-1)<<endl;
			}
			if(p == q && q == s && s != r)
			{
				// change s
				cout<<1<<endl;
				cout<<n-1<<" "<<n<<endl;
			}
			if(p == r && r == s && p!=q)
			{
				//change p
				cout<<1<<endl;
				cout<<1<<" "<<2<<endl;
			}
			if(p == r && q == s && p!= q)
			{
				//change q and r
				cout<<2<<endl;
				cout<<2<<" "<<1<<endl;
				cout<<n<<" "<<n-1<<endl;
			}
			if(p == s && q == r)
			{
				//change p and r
				cout<<2<<endl;
				cout<<1<<" "<<2<<endl;
				cout<<n<<" "<<n-1<<endl;
			}
			if(q == r && r == s && p!= q)
			{
				//change q
				cout<<1<<endl;
				cout<<2<<" "<<1<<endl;
			}
		}
	}	
}
