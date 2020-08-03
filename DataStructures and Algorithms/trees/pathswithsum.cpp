#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
    int data;
    node *left,*right;

    node(int x)
    {
        this->data = x;
        this->left = nullptr;
        this->right = nullptr;
    }
};

void paths_with_sum(node *root,int sum,int *count,int *currsum)
{
    if(root == nullptr)
    {
        return;
    }
    if((sum  == *currsum + root->data))
    {
         cout<<"currsum = "<< *currsum<<endl; 
        *count +=1;
    }
    paths_with_sum(root->left,sum,count,currsum+root->data);
  ///  *currsum = *currsum - root->data;
    paths_with_sum(root->right,sum,count,currsum+root->data);
    //*currsum = *currsum - root->data;
}

node* Create_Tree()
{
    node *root = new node(1);
    root->left = new node(2);
    root->left->left = new node(2);
    root->left->right = new node(1);
    root->right = new node(1);
    root->right->left = new node(3);
    root->right->right = new node(1);
    root->right->right->right = new node(1);
    return root;
}

int main()
{
    node *root = Create_Tree();
    int count =0,initsum = 0;
    paths_with_sum(root,4,&count,&initsum);
    cout<<count;
}