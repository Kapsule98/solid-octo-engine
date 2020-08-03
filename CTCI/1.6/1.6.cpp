#include<iostream>
#include<string>
#include<Set>
#include<vector>
using namespace std;

void Compress(string orignal)
{
	for(int i=0;i<orignal.length();i++)
	{
		int count =1;
		while(orignal[i] == orignal[i++] && i<orignal.length()-1)
		{
			count++;
			i++;
		}
		cout<<orignal[i]<<count;
	}	

}

void printRLE(string str) 
{ 
    for (int i = 0; i < str.length(); i++) 
    { 
        int count = 1; 
        while (i < n - 1 && str[i] == str[i + 1]) 
        { 
            count++; 
            i++; 
        } 
        cout << str[i] << count; 
    } 
} 

int main()
{
	string orignal;
	cin>>orignal;
	//printRLE(orignal);
	Compress(orignal);
	/*set<char>t;
	for(int i=0;i<orignal.length();i++)
	{
		t.insert(orignal[i]);
	}
	if(t.size() == orignal.length())
	{
		cout<<orignal<<endl;
	}
	else
	{
		Compress(orignal);
	}*/
	return 0;
}