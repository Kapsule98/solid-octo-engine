#include<bits/stdc++.h>
using namespace std;

#define li int64_t
#define pi 3.1415926536

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}	
	float area = 0;
	sort(a,a+n);
	if(n%2==0)
	{
		//first blue
		for(int i=0;i<n-1;i+=2)
		{
			area+= (pi*a[i+1]*a[i+1])-(pi*a[i]*a[i]);
		}
	}
	else
	{
		//first red
		area+= pi*a[0]*a[0];
		for(int i=1;i<n-1;i+=2)
		{
			area+= (pi*a[i+1]*a[i+1])-(pi*a[i]*a[i]);
		}
	}
	cout<<area<<endl;
}
