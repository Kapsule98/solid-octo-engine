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
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int e=0,o=0;
		for(int i=0;i<n;i+=2)
		{
			if(a[i] == 1)e++;
		}
		for(int i=1;i<n;i+=2)
		{
			if(a[i] == 1)o++;
		}
		//cout<<"o - e"<<o<<" "<<e<<endl;
		int diff = abs(e-o);
		if(diff == 0)
		{
			cout<<n<<endl;
			for(int i=0;i<n;i++)
			{
				cout<<a[i]<<" ";
			}
		}
		else
		{
			int ogdiff = diff;
			if(e>o)
			{
				for(int i=0;i<n;i+=2)
				{
					if(diff>0 && a[i] == 1)
					{
						a[i] = 3;
						diff--;
					}
				}
			}
			if(o>e)
			{
				for(int i=1;i<n;i+=2)
				{
					if(diff>0 && a[i] == 1)
					{
						a[i] = 3;
						diff--;
					}
				}
			}
			cout<<n-ogdiff<<endl;
			for(int i=0;i<n;i++)
			{
				if(a[i] == 1 || a[i] == 0)
				{
					cout<<a[i]<<" ";
				}
			}
		}
		cout<<endl;
	}
}
	