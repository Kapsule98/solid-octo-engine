

/* CTCI 1.3*/


#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
	string in;
	getline(cin,in);
	std::vector<char> v;
	for(int i=0;i<in.length();i++)
	{
		if(in[i] != ' ')
		{
			v.push_back(in[i]);
		}
		else
		{
			v.push_back('%');
			v.push_back('2');
			v.push_back('0');
		}
	}
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i];
	}
	return 0;

}