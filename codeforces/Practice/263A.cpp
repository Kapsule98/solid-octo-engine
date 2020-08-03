#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m[5][5],count =-1,place =-1;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>m[i][j];
            count++;
            if(m[i][j] == 1)
            {
                place = count;
            }
        }
    }
    
    int row=0,col=0;
    if(place/5 == 0 || place/5 == 4)row = 2;
    if(place/5 == 1 || place/5 == 3)row = 1;
    if(place%5 == 0 || (place-4)%5 == 0)col = 2;
    if((place-1) %5 == 0 || (place-3)%5 == 0)col = 1;
    cout<<row+col;
}