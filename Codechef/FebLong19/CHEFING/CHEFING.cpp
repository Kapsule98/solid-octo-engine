#include <iostream>
#include <string>
using namespace std;

int main() {
	// your code goes here
	int t,n,alphabet[26];
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    string Dishes[n];
	    string x;
	    int count =0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>Dishes[i];
	    }
	    for(int i=0;i<26;i++)
	    {
	        alphabet[i]=0;
	    }
	    for(int i=0;i<n;i++)
	    {
	       x=Dishes[i];
	        for(int j=0;j<x.length();j++)
	        {
	            if(alphabet[(int)x[j] -97] >= i+1)
	            {
	                //noop
	            }
	            else
	            {
	                alphabet[(int)x[j] -97]++;
	            }
	        }
	    }
	   
	    for(int i=0;i<26;i++)
	    {
	        if(alphabet[i] == n)
	        {
	            count++;
	        }
	    }
	    cout<<count<<endl;
	    
	}
	return 0;
}
