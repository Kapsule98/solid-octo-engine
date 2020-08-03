#include<bits/stdc++.h>
using namespace std;
int main()
{   
    string s;
    cin>>s;
    unordered_set<char> m;
    for(int i=0;i<s.length();i++)
    {
        m.insert(s[i]);
    }
    if(m.size()%2 == 0)
    {
        cout<<"CHAT WITH HER!";
    }
    else
    {
        cout<<"IGNORE HIM!";
    }
    
}