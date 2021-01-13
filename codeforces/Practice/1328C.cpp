#include<bits/stdc++.h>
using namespace std;

#define li int64_t

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string x;
		cin>>x;
		//cout<<x<<endl;
		bool first = false;
		string a="",b="";
		bool firstnontwo = false;
		for(int i=0;i<x.length();i++)
		{
			if(x[i] == '2')
			{
				if(firstnontwo && first)
				{
					a.push_back('0');
					b.push_back('2');
				}
				else
				{
					a.push_back('1');
					b.push_back('1');	
				}
				
				//cout<<"two"<<endl;
			}
			if(x[i] == '0')
			{
				a.push_back('0');
				b.push_back('0');
				firstnontwo = true;
				//cout<<"zero\n";
			}
			if(x[i] == '1')
			{
				firstnontwo = true;
				if(first)
				{
					a.push_back('0');
					b.push_back('1');
				}
				else
				{
					a.push_back('1');
					b.push_back('0');
					first = true;
				}
				//cout<<"1\n";
			}
		}
		cout<<a<<endl<<b<<endl;

	}	
}
