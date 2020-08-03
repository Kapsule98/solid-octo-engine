
/* 1.5 One away */

#include<iostream>
#include<string>
using namespace std;


bool OneAway(string a,string b)
{
	int indexa=0;
	int indexb=0;
	while(indexa<a.length() && indexb<b.length())
	{
		if(a[indexa] == b[indexb])
		{
			indexa++;
			indexb++;
		}
		else
		{
			if(indexa != indexb)
			{
				return false;
			}
			indexa++;
		}
	}
	return true;
}


int main()
{
	string a,b;
	cin>>a>>b;
	if(a.length()==b.length())
	{
		int DifferenceCounter =0;
		for(int i=0;i<a.length();i++)
		{
			if(a[i]!=b[i])
			{
				DifferenceCounter++;
			}
		}
		if(DifferenceCounter==1)
		{
			cout<<"One Away\n";
		}
		else{
			cout<<"Not one away\n";
		}
	}
	else if(a.length() == b.length()-1)         // one added in a so all chars of a in b
	{
		if(OneAway(b,a))
		{
			cout<<"One Away\n";
		}	
		else
		{
			cout<<"Not one away\n";
		}
	}
	else if(a.length()-1 == b.length())			// one subtracted in a so all in b in a 
	{
		if(OneAway(a,b))
		{
			cout<<"One Away\n";
		}	
		else
		{
			cout<<"Not one away\n";
		}
	}   
	else
	{
		cout<<"Not one away\n";
	}   
	return 0; 

}