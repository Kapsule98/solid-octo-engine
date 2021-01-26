#include<bits/stdc++.h>
using namespace std;

#define li int64_t

int main()
{
	int n;
	cin>>n;
	li a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}	
	for(int num = 0;num<n;num++)
	{
		li x = a[num];
		li root = sqrt(x);
		if(x == 1 || x== 2)
		{
			cout<<"NO\n";
		}
		else
		{
			if(root*root == x)
		{
			bool flag = false;
			//if root is prime then yes
			for(int i=2;i<=sqrt(root);i++)
			{
				if(root%i == 0)
				{
					flag = true;
					break;
				}
			}
			if(!flag)
			{
				cout<<"YES\n";
			}
			else
			{
				cout<<"NO\n";
			}
			//else no
		}
		else
		{
			cout<<"NO\n";
		}
		}
		
	}
}
