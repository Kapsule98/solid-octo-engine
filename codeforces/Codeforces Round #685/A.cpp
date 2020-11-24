#include<bits/stdc++.h>
using namespace std;

#define li int64_t

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		li n;
		cin>>n;
		if(n == 1)
		{
			cout<<0<<endl;
		}
		else if(n == 2)
		{
			cout<<1<<endl;
		}
		else if (n == 3)
		{
			cout<<2<<endl;
		}
		else
		{
			if(n % 2 == 0)
			{
				cout<<2<<endl;
			}
			else
			{
				cout<<3<<endl;
			}
		}
	}	
}
