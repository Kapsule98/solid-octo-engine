#include<bits/stdc++.h>
using namespace std;

#define li int64_t

int maxd(li x)
{
	int max = -1;
	while(x>0)
	{
		int digit = x%10;
		if(digit>max)
		{
			max = digit;
		}
		x/=10;
	}
	return max;
}

int mind(li x)
{
	int min = 11;
	while(x>0)
	{
		int digit = x%10;
		if(digit<min)
		{
			min = digit;
		}
		x/=10;
	}
	return min;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		li n,k;
		cin>>n>>k;
		k--;
		bool flag = false;
		while(k--)
		{
			if(mind(n) == 0)
			{
				flag = true;
				break;
			}
			else
			{
				n = n+mind(n)*maxd(n);
			}
			
		}
		cout<<n<<endl;
	}	
}
