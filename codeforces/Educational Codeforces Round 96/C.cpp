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
		cout<<2<<endl;
		int i = n-1;
		int last = n;
		n--;
		
		while(n--)
		{
			cout<<i<<" "<<last<<endl;
			(((last+i)/2) % 2 == 0)? last = (last+i)/2 : last = (last+i+1)/2;
			i--;
		}
	}
}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         