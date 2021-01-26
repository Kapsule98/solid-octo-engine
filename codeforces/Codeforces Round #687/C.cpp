#include<bits/stdc++.h>
using namespace std;

#define li int64_t
void solve()
{
	int n,p,k;
		cin>>n>>p>>k;
		string a;
		cin>>a;
		int x,y;
		cin>>x>>y;
		// place in a lvl (x)
		// OR 
		// remove first block (y)
		// dp(index+1,cost) = dp(index,cost) + x // if placing in a lvl

		//calculate cost for each case (remove 0 ,remove 1 , remove 2 , remove 3 ... upto removing p)
		int ans = n;
		for(int i=0;i<p;i++)
		{
			int first = i;
			cout<<"first index = "<<first;
			int step = k;
			int curr = p+first-1;
			int cost = y*i;
			while(curr < n)
			{
				//cout<<"curr = "<<curr<<endl;
				if(a[curr] == '0')
				{
					cost+=x;
				}
				curr+=k;
			}
			cout<<"Cost = "<<cost<<endl;
			ans = min(ans,cost);
		}
		cout<<ans<<endl;
		return;	
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		//cout<<"Testcase : "<<t<<endl;
		solve();
	}	
}
