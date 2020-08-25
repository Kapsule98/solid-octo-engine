#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define li int64_t

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int  a[n];
		int x,y,z;
		bool flag = false;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(int i=0;i<n-2;i++)
		{
			for(int j = i+1;j<n-1;j++)
			{
				for(int k = j+1;k<n;k++)
				{
					if(a[j]>a[i] && a[j]>a[k])
					{
						flag = true;
						x = i;
						y = j;
						z = k;
						break;
					}
				}
				if(flag)break;
			}
			if(flag)break;
		}
		if(flag)
		{
			cout<<"YES\n";
			cout<<x+1<<" "<<y+1<<" "<<z+1<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}	
}