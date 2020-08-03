

/*1.4 Palindromic Permutation*/

#include<iostream>
#include<string>
using namespace std;
int main()
{
	string in;
	getline(cin,in);
	int alphabet[26];
	for(int i=0;i<26;i++)
	{
		alphabet[i]=0;
	}
	for(int i=0;i<in.length();i++)
	{
		if(in[i]!=' ')
		{
			alphabet[in[i]-int('a')]++;
		}
	}
	int oddcount =0;
	for(int i=0;i<26;i++)
	{
		if(alphabet[i]%2 ==1)
		{
			oddcount++;
		}
	}
	if(oddcount == 1 || oddcount == 0)
	{
		cout<<"Palindromic Permutation\n";
	}
	else
	{
		cout<<"Non Palindromic Permutation\n";
	}
	return 0;
}