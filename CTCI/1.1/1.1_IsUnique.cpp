#include<iostream>
#include<set>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    set<char> sset;
    for(int i=0;i<s.length();i++)
    {
        sset.insert(s[i]);
    }
    if(sset.size() == s.length())
    {
        cout<<"No Duplicates"<<endl;
    }
    else
    {
        cout<<"Duplicates"<<endl;
    }

}