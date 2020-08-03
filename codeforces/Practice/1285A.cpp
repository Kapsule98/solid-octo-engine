#include<bits/stdc++.h> 
using namespace std; 

int main() 
{ 
     int n;
     string s;
     cin>>n>>s;
     int l=0,r=0;
     for(int i=0;i<n;i++)
     {
     	if(s[i] == 'L')l++;
     	if(s[i] == 'R')r++;
     }  
     cout<<l+r+1;
} 
 