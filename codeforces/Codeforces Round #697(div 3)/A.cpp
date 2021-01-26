#include<bits/stdc++.h>
using namespace std;

#define li int64_t

int main()
{
	li t;
	cin>>t;
	while(t--)
	{
		li n;
		cin>>n;
		if(n<3)
		{
			cout<<"NO\n";
		}
		else if(n%2 == 1)
		{
			cout<<"YES\n";
		}
		else
		{
			bool flag = false;
			for(li i = 3;i<=sqrt(n);i+=2)
			{
				if(n%i == 0)
				{
					flag = true;
					break;
				}
			}
			if(flag)
			{
				cout<<"YES\n";
			}
			else
			{
				cout<<"NO\n";
			}
		}
	}	
}
