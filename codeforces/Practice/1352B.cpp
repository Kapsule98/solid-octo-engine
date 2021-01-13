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
		int k;
		cin>>k;
		if((n-(k-1))%2 == 1 && n-(k-1)>0)
		{
			cout<<"YES\n";
			for(int i=0;i<k-1;i++)
			{
				cout<<1<<" ";
			}
			cout<<n-(k-1)<<endl;
		}
		else if((n-(2*(k-1)))%2 == 0 && (n-(2*(k-1)))>0)
		{
			cout<<"YES\n";
			for(int i=0;i<k-1;i++)
			{
				cout<<2<<" ";
			}

			cout<<n-(2*(k-1))<<endl;
		}
		else
		{
			cout<<"NO\n";
		}
	}	
}
