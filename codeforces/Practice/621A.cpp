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
	sort(a,a+n);
	int even=0,odd =0;
	li sum =0;
	li minodd = 10000000000000;
	for(int i=0;i<n;i++)
	{
		sum+=a[i];
		if(a[i] % 2 == 0)
		{
			even++;
		}
		else
		{
			if(a[i] <minodd)
			{
				minodd = a[i];
			}
			odd++;
		}
	}
	if(odd % 2 == 0)
	{
		cout<<sum<<endl; 
	}
	else
	{
		cout<<sum-minodd<<endl;
	}
}
