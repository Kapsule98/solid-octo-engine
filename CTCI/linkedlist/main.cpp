#include <bits/stdc++.h>

using namespace std;

class node{
public:
    int data;
    node * next;
};

void TraverseList(node* start)
{
    if(start==nullptr)
    {
        return;
    }
    else{
        node *p = start;
        while(p!=nullptr)
        {
            cout<<p->data<<endl;
            p = p->next;
        }

        return;
    }

}

int main()
{
    node *n1,*n2,*n3,*n4;
    n1 = new node();
    n2 = new node();
    n3 = new node();
    n4 = new node();
    n1->data = 1;
    n2->data =2;
    n3-> data = 3;
    n1->next = n3;
    n2->next = n4;
    n3->next = n2;
    n4->next = nullptr;
    n4->data = 4;
    TraverseList(n1);

    return 0;
}
