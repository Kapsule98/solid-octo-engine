#include<bits/stdc++.h>
using namespace std;

#define li int64_t

int main()
{
	int a,b;
	cin>>a>>b;
	int c = a;
	int h =0;
	while(c>0)
	{
		h+=c;
		c = c/b;
	}	
	cout<<h<<endl;
}
