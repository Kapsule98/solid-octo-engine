#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int q,n;
		cin>>q>>n;
		if(n>=q)
		{
			cout<<q<<endl;
		}
		else
		{
			long long int genq = 0;
			long long int i=1;
			while(genq<q)
			{
				genq += pow(n,i);
				i++;
			}
			long long int steps = i-2;
			long long int ans = 0,count = 0;
			while(steps)
			{
				count+= pow(n,steps);
				ans += (pow(n,steps))*steps;
				steps--;
			}
			long long int rem = q - count;
			ans+= rem*(i-1);
			cout<<ans<<endl;
		}
	}	
}