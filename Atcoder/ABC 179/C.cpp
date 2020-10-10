#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define li int64_t

int main()
{
	int n;
	cin>>n;
	li count = n-1;
	for(int i=2;i<n;i++)
	{
		if(n%i == 0)
		{
			count += (n/i)-1;
		}
		else
		{
			count+= (n/i);
		}
	}	
	cout<<count;
}
