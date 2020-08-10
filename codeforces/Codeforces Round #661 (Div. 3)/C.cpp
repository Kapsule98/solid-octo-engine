#include<bits/stdc++.h>
using namespace std;
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
		if(n == 1)
		{
			cout<<0<<endl;
			continue;
		}
		else
		{
			sort(a,a+n);
			int maxindex = a[n-2]+a[n-1];
			int minindex = a[0]+a[1];
			int totalindex = maxindex-minindex+1;
			int current = 0;
			int max = -1;
			int maxsum = 0;
			for(int i=minindex;i<=maxindex;i++)
			{
				int l = 0;
				int r = n-1;
				current = 0;
				while(l<r)
				{
					if(a[l]+a[r] == i){
						current++;
						r--;
						l++;
					}
					else if(a[l]+a[r] > i)
					{
						r--;
					}
					else
					{
						l++;
					}
					
				}
				if(current>max){max = current;
				maxsum = i;}
			}
		
			cout<<max<<endl;
		}
		
	}	
}