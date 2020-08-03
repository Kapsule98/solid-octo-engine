#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    char c[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        string s[n+1];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int nextchar =0;
        while(a[0]--)
        {
            s[0].push_back('a');   
        }
        s[1] = s[0];
        for(int i=1;i<n;i++)
        {
            if(a[i]<=a[i-1])
            {
                s[i+1] = s[i].substr(0,a[i]);
                cout<<"a";
            }
            else
            {
                while(s[i].length() - a[i])
                {
                    s[i].push_back(c[nextchar]);
                }
                s[i+1] = s[i];
                nextchar = (nextchar+1)%26;
            }
            
        }
        for(int i=0;i<=n;i++)
        {
            cout<<s[i]<<endl;
        }
        
    }
    return 0;
}