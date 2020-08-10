#include<bits/stdc++.h>
using namespace std;

/*long long int f(long long int n)
{
	if(n == 1)return 1;
	else if(n==2)return 2;
	else
		{
			return 1+f(n-2);
		}
}
*/
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n;
		cin>>n;
		//cout<<f(n)<<endl;
		cout<<n/2 +1<<endl;
	}	
}