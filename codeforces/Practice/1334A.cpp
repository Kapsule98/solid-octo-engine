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
		bool flag = true;
		int a[n],b[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i]>>b[i];
		}
		int play = 0;
		int clear = 0;
		if(a[0]<b[0])
		{
			cout<<"NO\n";
		}
		else
		{
			for(int i=0;i<n-1;i++)
			{
				play = a[i+1]-a[i];
				clear = b[i+1]-b[i];
				if(play<0 || clear < 0 || clear>play)
				{
					flag = false;
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
