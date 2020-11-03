		#include <bits/stdc++.h>
		using namespace std;
		#define li int_64t



		int main()
		{
			int x;
			cin>>x;
			int steps = x/5;
			if(x%5 !=0)
			{
				steps++;
			}	
			cout<<steps<<endl;
		}