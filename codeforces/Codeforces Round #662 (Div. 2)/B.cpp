#include<bits/stdc++.h>
using namespace std;

void deletex(vector<int>a,int x,int l,int r)
{
	int mid = l + (r-l)/2;
	if(a[mid] == x){
		vector<int>::iterator it = a.begin();
		while(mid--)
		{
			it++;
		} 
		cout<<a[mid];
		a.erase(it);
	}
	else if(a[mid]>x){deletex(a,x,l,mid-1);}
	else{
		deletex(a,x,mid+1,r);
	}
}

int main()
{
	int n,x;
	cin>>n;
	vector<int> a;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		a.push_back(x);
	}	
	sort(a.begin(),a.end());
	int q;
	cin>>q;
	string s;
	int in;
	bool curr = false;
	int sq =0,rect =0,sstartindex = -1;
	for(int i=0;i<n-3;i++)
	{
		if(a[i] == a[i+1] && a[i]== a[i+2] && a[i]== a[i+3])
		{
			sq++;
			sstartindex = i;
			break;
		}
	}
	for(int i=0;i<n-1;i++)
	{
		if(i == sstartindex){i+=4;}
		if(a[i] == a[i+1]){rect++;}
	}
	rect/=2;
	if(sq!=0 && rect!=0)
	{
		curr = true;
	}

	while(q--)
	{
		cin>>s>>in;
		if(curr == false && s[0] == '-')
		{
			cout<<"NO\n";
			deletex(a,in,0,a.size()-1);
		}
		if(curr == true && s[0] == '+')
		{
			cout<<"YES\n";
			a.push_back(in);
			sort(a.begin(),a.end());
		}
		else
		{
			if(s[0] == '+')
			{
				a.push_back(in);
				sort(a.begin(),a.end());
				sq = 0,rect =0;
				for(int i=0;i<n-3;i++)
				{
					if(a[i] == a[i+1] && a[i]== a[i+2] && a[i]== a[i+3])
					{
						sq++;
						sstartindex = i;
						break;
					}
				}
				for(int i=0;i<n-1;i++)
				{
					if(i == sstartindex){i+=4;}
					if(a[i] == a[i+1]){rect++;}
				}
				rect/=2;
				if(sq!= 0 && rect!=0){cout<<"YES\n";}
				else
				{
					cout<<"NO\n";
				}
			}
			else
			{
			
				deletex(a,in,0,a.size()-1);
				sq = 0,rect =0;
				for(int i=0;i<n-3;i++)
				{
					if(a[i] == a[i+1] && a[i]== a[i+2] && a[i]== a[i+3])
					{
						sq++;
						sstartindex = i;
						break;
					}
				}
				for(int i=0;i<n-1;i++)
				{
					if(i == sstartindex){i+=4;}
					if(a[i] == a[i+1]){rect++;}
				}
				rect/=2;
				if(sq!= 0 && rect!=0){cout<<"YES\n";}
				else
				{
					cout<<"NO\n";
				}

			}
		}
	}
}