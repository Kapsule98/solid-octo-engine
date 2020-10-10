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
		li x,y,k,ans;
		cin>>x>>y>>k;
		if((y*k+k-1)%(x-1) == 0)
		{
			ans = (y*k+k-1)/(x-1);
		}
		else
		{
			ans = ((y*k+k-1)/(x-1))+1;
		}
		cout<<ans+k<<endl;

		/*n>= yk+k-1 / x-1
			k+ky sticks

			1 stick
			1 trade  = x
			2 trades = 2x-1
			3 trades = 3x-2
			n trades = nx-n+1
			min n st:
			n >= k+ky-1 / (x-1)

		*/

	}	
}