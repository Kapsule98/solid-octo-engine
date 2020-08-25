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
		int n,k;
		cin>>n>>k;
		int a[n];
		bool flag = true;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}

		int max = -1;
		for(int i=0;i<n;i++)
		{
			if(a[i]>max)max = a[i];
		}
		//cout<<max<<endl;
		if(max>k)cout<<-1<<endl;
		else
		{
			
			int trips = 0;
			int i = 0;

			while(true)
			{	
				//assert(a[i]<=k);	
				int sum = 0;
				while(sum +a[i] <= k)
				{
					sum+=a[i];
					
					i++;
					if(i>=n)break;
				}
				trips++;
				if(i>=n)break;

			}
				
				cout<<trips<<endl;
			
		}
		
		
		
	}	
}