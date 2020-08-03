#include<bits/stdc++.h>
using namespace std;
int main()
{   
    string s;
    cin>>s;
    int a=0,b=0,c=0;
    for(int i=0;i<s.length();i+=2)
    {
        if(s[i] == '1')a++;
        if(s[i] == '2')b++;
        if(s[i] == '3')c++;
    }
    int i=0;
    while(a--)
    {
        s[i] = '1';
        i+=2;
    }
    while(b--)
    {
        s[i] = '2';
        i+=2;
    }
    while(c--)
    {
        s[i] = '3';
        i+=2;
    }
    cout<<s;
}   