#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define li int64_t

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}	
	li manhattan = 0,chebyshev = a[0];
	double eculidean;
	for(int i=0;i<n;i++)
	{
		manhattan+= abs(a[i]);
		eculidean += a[i]*a[i];
		if(a[i]>chebyshev)
		{
			chebyshev = a[i];
		}
	}
	cout<<manhattan<<"\n"<<setprecision(15)<<sqrt(eculidean)<<"\n"<<chebyshev;
}