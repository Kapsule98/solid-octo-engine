#include<bits/stdc++.h>
using namespace std;

#define li int64_t

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int min = 101;
		int neg = 0;
		int sum = 0;
		bool zero = false;
		for(int i=0;i<n*m;i++)
		{
			
			int x;
			cin>>x;
			if(x == 0)
			{
				zero = true;
			}
			if(x<0)
			{
				neg++;
			}
			if(abs(x)<min)
			{
				min = abs(x);
			}
			sum += abs(x);
		}

		if(neg % 2 == 0 || zero)
		{
			cout<<sum<<endl;
		}
		else
		{
			cout<<sum-(2*min)<<endl;
		}
	}	
}
