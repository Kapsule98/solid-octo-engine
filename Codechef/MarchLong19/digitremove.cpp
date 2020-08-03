#include<iostream>
#include<vector>
#include<limits>
using namespace std;

long long int DigitRemoveX(long long int num,int x)
{
	long long int k = num;
	int count = 0;
	vector <int> numarray;
		while(k!=0)
		{
			numarray.push_back(k%10);
			count++;
			k/=10;
		}
	k=num;
	for(int i=count-1;i>=0;i--)
	{
		numarray[i] = k%10;
		k/=10;
	}
	for(int i=x;i<count-1;i++)
	{
		numarray[i] = numarray[i+1];
	}
	k=0;
	for(int i=0;i<count-1;i++)
	{
		k+=numarray[i];
		k*=10;
	}
	return k/10;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n;
		int d;
		cin>>n>>d;
		n=n*10+d;
		long long int temp = n;
		int digitcount = 0;
		while(n!=0)
		{
			digitcount++;
			n/=10;
		}
		n=temp;
		long long int min = LLONG_MAX;
		for(int i=0;i<digitcount;i++)
		{
			if(DigitRemoveX(n,i)<min)
			{
				min = DigitRemoveX(n,i);
			}
		}
		cout<<min<<endl;
	}
}