#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int k;
	cin>>k;
	int i = 1;
	while(true)
	{
		long long int x = (pow(10,i)-1)*7;
		x/=9;
		if(x % k == 0)
		{
			cout<<i;
			cout<<x;
			break;
		}
		i++;
	}	
}