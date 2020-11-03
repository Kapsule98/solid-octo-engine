#include<bits/stdc++.h>
using namespace std;

#define li int64_t

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		li a,b,c;
		cin>>a>>b>>c;
		li mindist = abs(a-b)+abs(b-c)+abs(c-a);
		for(int i = a-1;i<=a+1;i++)
		{
			for(int j = b-1;j<=b+1;j++)
			{
				for(int k = c-1;k<=c+1;k++)
				{
					li dist = abs(i-j) + abs(j-k) + abs(k-i);
					if(dist<mindist)
					{
						mindist = dist;
					}
				}
			}
		}
		cout<<mindist<<endl;
	}	
}
