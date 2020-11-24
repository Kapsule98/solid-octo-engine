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
		li ans;
		li index = 0;
		cin>>n;
		//cout<<n<<"  ";
		if(n==1)
		{
			ans =0;
		}
		else
		{
			li min = 10000000000;
			li minindex = -1;
			for(int i=1;i<=sqrt(n)+1;i++)
			{
				li inc = i-1;
				li cpy;
				if(n%i == 0)
				{
					cpy = n/i;
				}
				else
				{
					cpy = 1+(n/i);
				}
				li op = cpy+inc-1;
				if(op<min)
				{
					min = op;
					minindex = i;
				}
			}
			ans = min;
			index = minindex;
		}
		cout<<ans<<endl;
	}	
}
