#include<bits/stdc++.h>
using namespace std;

int findoddcount(int r,int g,int b, int w)
{
	int oddcount =0;
	if(r%2 == 1)oddcount++;
		if(g%2 ==1)oddcount++;
		if(b%2 == 1)oddcount++;
		if(w%2 == 1)oddcount++;
		return oddcount;
	}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int r,g,b,w;
		cin>>r>>g>>b>>w;
		int oddcount = findoddcount(r,g,b,w);
		bool flag = false;
		if(oddcount<2)
		{
			flag = true;
		}
		else
		{
			if(r>0 && b>0 && g>0)
			{
				oddcount = findoddcount(r,b,g,w);
				if(oddcount == 3)
				{
					flag = true;
				}
				if(oddcount == 2 )
				{
					//not possible
				}
				if(oddcount == 4)
				{
					flag = true;
				}
			}
		}
		if(flag)
		{
			cout<<"YES\n";
		}
		else
		{
			cout<<"NO\n";
		}
	}	
}
