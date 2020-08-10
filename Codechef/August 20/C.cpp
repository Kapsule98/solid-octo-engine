#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int c,r;
		cin>>c>>r;
		int digitc ,digitr;
		if(c%9 == 0)digitc = c/9;
		else{
			digitc = 1+(c/9);
		}
		if(r%9 == 0)digitr = r/9;
		else
			{
				digitr = 1+(r/9);
			}
		if(digitc<digitr)
		{
			cout<<0<<" "<<digitc<<endl;
		}
		else
		{
			cout<<1<<" "<<digitr<<endl;
		}
	}	
}