#include<bits/stdc++.h>
using namespace std;

#define li int64_t

int main()
{
	int x1,x2,y1,y2;
	cin>>x1>>y1>>x2>>y2;
	int x3,x4,y3,y4;
	int rise = abs(y2-y1);
	int run = abs(x2-x1);
	if(!((rise == run) || (x1 == x2) || (y1 == y2)))
	{
		cout<<-1<<endl;
	}
	else
	{
		int side = 0;
	bool verticle = false;
	bool diag = false;
	if(x1 == x2)
	{
		side = abs(y2-y1);
		verticle = true;
	}
	else if(y1 == y2)
	{
		side = abs(x2-x1);
	}
	
	else if(rise == run)
	{
		diag = true;
	}
	if(diag)
	{
		x3 = x1;
		y3 = y2;
		x4 = x2;
		y4 = y1;
	}
	else if(verticle)
	{
		x3 = x1+side;
		x4 = x2+side;
		y3 = y1;
		y4 = y2;
	}
	else
	{
		x3 = x1;
		x4 = x2;
		y3 = y1+side;
		y4 = y2+side;
	} 
	cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4<<endl;
	}
	
}
