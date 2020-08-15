#include<bits/stdc++.h>
using namespace std;


bool prime(long long int n)
{
	for(int i=2;i<=sqrt(n)+1;i++)
	{
		if(n%i == 0)
		{
			return false;
		}
	}
	return true;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n;
		cin>>n;
		if(n == 1)
		{
			cout<<"Neither\n";
			continue;
		}
		else
		{
			if(prime(n))
			{
				cout<<"Prime\n";
			}
			else
			{
				cout<<"Composite\n";
			}
		}
	}	
}