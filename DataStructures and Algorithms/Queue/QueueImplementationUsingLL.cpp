#include<iostream>
using namespace std;
#define N 5
#define M 5

template <class T>
class node{
	public:
	T value;
	node <T> *next;
	node(T x)
	{
		value = x;
		next = NULL;
	}
};

template <class T>
class queue{
	node<T> *start;
	node<T> *end;

	public:

	queue()
	{
		start = NULL;
		end = NULL;
	}

	bool empty()
	{
		return start == NULL;
	}

	void push(T v)
	{
		node<T> *temp = new node<T>(v);
		if(empty())
		{
			start = temp;
			end = temp;
		}
		else
		{
			end->next = temp;
			end = temp;
		}
		return;
	}

	void pop()
	{
		if(empty())
		{
			return;
		}
		else
		{
			node<T> *temp = start;
			start = start->next;
			delete temp;
		}
		return;
	}

	T front()
	{
		if(empty())
		{
			return {};
		}
		else
		{
			return start->value;
		}
	}

};

class coordinate
{
public:
	int x;
	int y;
	coordinate(int a = 0,int b = 0)
	{
		this->x = a;
		this->y = b;
	}
};

int krow[] = {-1,-1,-1,0,0,1,1,1};
int kcol[] = {-1,0,1,-1,1,-1,0,1}; 

bool isSafe(int x,int y)
{
	return (x>=0 && x<=N && y>=0 && y<=M);
}

void BFS(int graph[N][M],int row,int col,bool visited[N][M])
{
	
	if(!visited[row][col])
	{
		visited[row][col] = true;
		queue<coordinate> q;
		q.push(coordinate(row,col));
		while(!q.empty())
		{
			coordinate p = q.front();
			q.pop();
			for(int k = 0;k<8;k++)
			{	
				int nx = p.x + krow[k];
				int ny = p.y + kcol[k];
				if(isSafe(nx,ny) && !visited[nx][ny] && graph[nx][ny] == 1)
				{
					q.push(p);
				}
			}
		}

	}
	return;
}




int main()
{			

		
	int graph[N][M] = { { 1, 1, 0, 0, 0 }, 
                     { 0, 1, 0, 0, 1 }, 
                     { 1, 0, 0, 1, 1 }, 
                     { 0, 0, 0, 0, 0 }, 
                     { 1, 0, 1, 0, 1 } };

    bool visited[N][M];
    for(int i=0;i<N;i++)
    {
    	for(int j=0;j<M;j++)
    	{
    		visited[i][j] = false;
    	}
    }
    
    int count = 0;
    cout<<"asd";
   
    for(int i=0;i<N;i++)
    {
    	for(int j=0;j<M;j++)
    	{
    		
    		if(graph[i][j] == 1 && !visited[i][j])
    		{
    			count++;
    			BFS(graph,i,j,visited);
    		}
    	}
    }
    cout<<count<<endl;
    

	return 0;	
}
