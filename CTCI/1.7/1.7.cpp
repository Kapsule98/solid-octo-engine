#include<iostream>
#include<vector>
using namespace std;

void RotateMatrix(vector<vector<int>> matrix)
{
	int n= matrix[0].size();
	for(int i=0;i<n/2;i++)
	{
		for(int j=i ;j<n-i-1;j++)
		{
			int temp = matrix[i][j];
			matrix[i][j] = matrix[n-j-1][i];
			matrix[n-j-1][i] = matrix[n-i-1][n-j-1];
			matrix[n-i-1][n-j-1] = matrix[j][n-i-1];
			matrix[j][n-i-1] = temp;
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}
}



int main()
{
	int n;
	cin>>n;
	vector<vector<int>> matrix;
	for(int i=0;i<n;i++)
	{
		vector<int>row;
		for(int j=0;j<n;j++)
		{
			int k;
			cin>>k;
			row.push_back(k);
		}
		matrix.push_back(row);
	}
	RotateMatrix(matrix);
	return 0;
}