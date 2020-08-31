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
		bool a[n+1];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		a[n] = 1;
		int max = -1;
		int prevmax = -1;
		int count = 0;
		for(int i=0;i<n+1;i++)
		{
			if(a[i] == 0)
			{
				count =1;
				while(a[i+1] == 0)
				{
					i++;
					count++;
				}
				if(count>max){
				

					if(max == -1)
					{
						max = count;
						prevmax = max;
					}
					else
					{
						prevmax = max;
						max = count;
					}
				}
			}
		}
		
		if(max %2 == 0 || max/2<=prevmax)
		{
			cout<<"NO\n";
		}
		else
		{
			cout<<"YES\n";
		}
	}	
}