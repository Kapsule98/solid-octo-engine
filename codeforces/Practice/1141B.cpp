#include<bits/stdc++.h>
using namespace std;

#define li int64_t

int main()
{
	int n;
	cin>>n;
	int a[2*n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}	
	for(int i=n;i<2*n;i++)
	{
		a[i] = a[i-n];
	}
	int max = 0;
	for(int i=0;i<2*n;i++)
	{
		if(a[i] == 1)
		{
			int count = 0;
			while(a[i] == 1 && i<2*n)
			{
				count++;
				i++;
			}
			if(count>max)
			{
				max = count;
			}
		}

	}
	cout<<max<<endl;
}

