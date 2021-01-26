#include<iostream>
using namespace std;
#define N 5
#define M 5
#define li int64_t

class Coordinate
{
	public:
	int x,y;
	Coordinate(int x,int y)
	{
		this->x = x;
		this->y = y;
	}
};

class Queue
{
	public:
	long long int capacity,front,rear,size;
	Coordinate *array;
};



Queue* CreateQueue(long long int capacity)
{
	Queue* queue = new Queue();
	queue->capacity = capacity;
	queue->size = 0;
	queue->front = 0;
	queue->rear = capacity-1;
	queue->array = new Coordinate[(queue->capacity*sizeof(Coordinate))];
	return queue;
}

bool isFull(Queue* queue)
{
	return (queue->size == queue->capacity);
}

bool isEmpty(Queue* queue)
{
	return (queue->size == 0);
}

void Enqueue(Queue* q, Coordinate item)
{
	if(isFull(q))
	{
		return;
	}
	else
	{	//front no change
		//rear
		q->rear = (q->rear+1)% q->capacity;
		//size
		q->size = q->size+1;
		//capacity no change
		//array
		q->array[q->rear] = item;
		return;
	}
}

Coordinate Dequeue(Queue* q)
{
	if(isEmpty(q))
	{
		return -1;
	}
	else
	{
		//find first element and return it
		int FirstElement = q->array[q->front];
		// front
		q->front = (q->front+1) % q->capacity;
		//rear nochange
		//size
		q->size = q->size -1;
		//capacity no change
		// array no change
		return FirstElement;
	}
}

Coordinate Front(Queue* q)
{
	if(isEmpty(q))
	{
		return -1;
	}
	else
	{
		return q->array[q->front];
	}
}
Coordinate Rear(Queue* q)
{
	if(isEmpty(q))
	{
		return -1;
	}
	else
	{
		return q->array[q->rear];
	}
}

int row[8] = {-1,-1,-1,0,0,1,1,1};
int col[8] = {-1,0,1,-1,1,-1,0,1};

bool isSafe(int graph[N][M] , int row,int col, bool visited[N][M])
{
	if(row>=0 && col >=0 && row<N && col<M && graph[row][col] == 1 && !visited[row][col] )
	{
		return true;
	}
	else
	{
		return false;
	}
}

void BFS(int graph[N][M], int row,int col,bool visited[N][M])
{

	if(visited[row][col] == 0)
	{
		Queue* q = CreateQueue(1000);
		Coordinate currPoint = new Coordinate(row,col);
		q.Enqueue(currPoint);
		visited[row][col] = 1;
		while(!isEmpty(q))
		{
			Coordinate point = Dequeue(q);
			for(int k = 0;k<8;k++)
			{
				if(isSafe(graph,point->x+row[k],point->y+col[k],visited))
				{
					visited[point->x+row[k]][point->y+row[k]] = true;
					Enqueue(q,new Coordinate(point->x+row[k],point->y+col[k]));
				}
			}
		}
	}
}

int CountIslands(int Graph[N][M])
{
	bool visited[N][M];
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<M;j++)
		{
			visited[i][j] = false;
		}
	}
	int Islands = 0;
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<M;j++)
		{
			if(!visited[i][j] && Graph[i][j] == 1)
			{
				BFS(Graph,i,j,visited);
				Islands++;
			}
		}
	}
	return Islands;
}

int main()
{
	int Graph[N][M] ={{ 1, 1, 0, 0, 0 }, 
                      { 0, 1, 0, 0, 1 }, 
                      { 1, 0, 0, 1, 1 }, 
                      { 0, 0, 0, 0, 0 }, 
                      { 1, 0, 1, 0, 1 } }; 

    cout<<CountIslands(Graph);
}
