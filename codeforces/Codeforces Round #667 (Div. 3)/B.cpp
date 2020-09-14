#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define li int64_t

//WA

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		li a,b,x,y,n;
		cin>>a>>b>>x>>y>>n;
		assert(a>=x && b>=y);
		li adiff = a-x , bdiff = b-y;
		li prod;
		if(a>b && a-n>=b && a-n>=x)
		{
			prod = b*(a-n);
		}
		else if(b>a && b-n >= y && b-n>a)
		{
			prod = (b-n)*a;
		}
		else if(adiff+bdiff < n)
		{
			prod = x*y;
		}
		else
		{
			if(a>b)
			{
				n-=a-b;
				a=b;
			}
			else if(b>a)
			{
				n-= b-a;
				b=a;
			}
			if(n%2 == 0)
			{
				a-= n/2;
				b-=n/2;
				prod = a*b;
			}
			else
			{
				a-=n/2;
				b-=n/2;
				a--;
				prod = a*b;
			}
		}
		cout<<prod<<endl;
	}	
}