#include <bits/stdc++.h>>

using namespace std;
struct node
{
    int data;
    node *next;
};


int main()
{
    node a,b;
    a->data = 1;
    b->data = 2;
    a->next = b;
    b->next = nullptr;
    return 0;
}
