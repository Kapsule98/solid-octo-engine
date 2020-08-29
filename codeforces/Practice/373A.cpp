#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define li int64_t

int main()
{
	int k;
	cin>>k;
	char c;
	int a[9] = {0,0,0,0,0,0,0,0,0};
	int max = -1;
	for(int i=0;i<16;i++)
	{
		cin>>c;
		if(c != '.')
		{
			a[(int)(c-'1')]++;
		}
		
	}	
	for(int i=0;i<9;i++)
	{
		//cout<<a[i]<<" ";
		if(a[i]>max)max = a[i];
	}
	if(max>2*k)
	{
		cout<<"NO";
	}
	else
	{
		cout<<"YES";
	}
}