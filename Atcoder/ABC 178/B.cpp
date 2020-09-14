#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define li int64_t

int main()
{
	li a,b,c,d;
	cin>>a>>b>>c>>d;
	li prod[4];
	prod[0] = a*c;
	prod[1] = a*d;
	prod[2] = b*c;
	prod[3] = b*d;
	li max = prod[0];
	for(int i=0;i<4;i++)
	{
		if(prod[i]>max)max = prod[i];
	}
	cout<<max;
}