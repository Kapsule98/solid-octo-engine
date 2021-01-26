//playground
#include<bits/stdc++.h>
using namespace std;

#define li int64_t

int main()
{
	string s = "Kapil";
	char *p = "Kapil";
	int n = sizeof(p)/sizeof(char);
	int size = 0;
	while(*p != '\0')
	{
		size++;
		p++;
	}

	cout<<n<<endl;
	cout<<size<<endl;
	//for(int i=0;i<sizeof(p)/sizeof(char);i++)


}
