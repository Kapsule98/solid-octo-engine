#include<bits/stdc++.h>
using namespace std;

#define li int64_t

int main()
{
	int n;
	cin>>n;
	int a[n],b[n];
	bool put[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		put[i] = false;
	}	
	for(int i=0;i<n;i++)
	{
		cin>>b[i];
	}
	for(int i=0;i<n;i++)
	{
		// find b[i] in a and move all books above and this in bag
		int j=0;
		while(a[j]!= b[i])
		{
			j++;
		}
		if(put[a[j]])
		{
			cout<<0<<" ";
			continue;
		}
		else
		{
			//count no of books moved and print and set put for all books
			int count = 1;
			put[a[j]] = true;
			for(int k = 0;k<j;k++)
			{
				if(!put[a[k]])
				{
					count++;
					put[a[k]] = true;
				}
			}
			cout<<count<<" ";
		}

	}
}
