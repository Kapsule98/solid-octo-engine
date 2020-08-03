#include<bits/stdc++.h>
using namespace std;
int main()
{
    string c,c1,c2,c3,c4,c5;
    cin>>c>>c1>>c2>>c3>>c4>>c5;
    bool play = false;
    char x = c[0],y = c[1];
    if(x == c1[0] || x == c2[0] || x == c3[0] || x == c4[0] || x == c5[0] || y == c1[1] || y == c2[1] || y == c3[1] || y == c4[1] || y == c5[1])
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    
    
}