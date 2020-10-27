#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define li int64_t

int main()
{
	li n;
	cin>>n;
	if(n == 1)
	{
		cout<<1<<endl;
	}
	else
	{
		cout<<1<<endl;
	vector<li> factors;
	for(int i=2 ; i<= sqrt(n);i++)
	{
		if(n%i == 0 && i != sqrt(n))
		{
			cout<<i<<endl;
			factors.push_back(n/i);
		}
		if(n%i == 0 && i == sqrt(n))
		{
			cout<<i<<endl;
		}
	}	
	for(int i = factors.size()-1;i>=0;i--)
	{
		cout<<factors[i]<<endl;
	}
	cout<<n<<endl;
	}
	
}