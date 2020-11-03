#include<bits/stdc++.h>
using namespace std;

#define li int64_t

int main()
{
	int black =0 , white = 0;
	for(int i=0;i<8;i++)
	{
		for(int j=0;j<8;j++)
		{
			char x;
			cin>>x;
			
			if('a'<= x && x<='z')
			{
				//black
				if(x == 'q')
				{
					black+=9;
				}
				if(x == 'r')
				{
					black+=6;
				}
				if(x == 'b' || x == 'k')
				{
					black+=3;
				}
				if(x == 'p')
				{
					black++;
				}
			}
			if('A'<=x && x<='Z')
			{
				//white
				if(x == 'Q')
				{
					white+=9;
				}
				if(x == 'R')
				{
					white+=6;
				}
				if(x == 'B' || x == 'K')
				{
					white+=3;
				}
				if(x == 'P')
				{
					white++;
				}

			}
		}
	}	
	if(white>black)
	{
		cout<<"White"<<endl;
	}
	if(black>white)
	{
		cout<<"Black\n";
	}
	if(white == black)
	{
		cout<<"Draw"<<endl;
	}
}
