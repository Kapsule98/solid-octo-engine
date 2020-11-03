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
		for(int i=1;i<n-1;i++)
		{
			int l = i-1,r = i+1;
			while(l>=0 && r<= n-1)
			{
				if(a[l] < a[i] && a[i] > a[r])
				{
					flag = true;
					x = l;
					y = i;
					z = r;
					break;
				}
				l--;
				r++;
			}
			if(flag){
				break;
			}
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