#include<bits/stdc++.h>
using namespace std;

#define li int64_t

int main()
{
	string s;
	cin>>s;
	if(s.length()<7)
	{
		cout<<"no\n";
	}	
	else
	{
		if(s.length() == 7 && s == "1000000")
		{
			cout<<"yes\n";
		}
		else
		{
			bool flag = false;
			for(int i=0;i<s.length()-1;i++)
			{
				if(s[i] == '1')
				{
					//find if there are 6 zeroes in front of i
					int count = 0;
					for(int j = i+1;j<s.length();j++)
					{
						if(s[j] == '0')
						{
							count++;
						}
					}
					if(count>=6)
					{
						flag = true;
					}
				}
			}
			if(flag)
			{
				cout<<"yes\n";
			}
			else
			{
				cout<<"no\n";
			}
		}
		
	}

}
