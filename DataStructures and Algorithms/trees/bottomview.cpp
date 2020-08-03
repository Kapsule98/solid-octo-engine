#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
    int data;
    node* left,*right;

    node(int x)
    {
        this->data = x;
        this->left = nullptr;
        this->right = nullptr;
    }
};

void Bottom_view(node *root)
{
    if(root == nullptr)
    {
        return;
    }
    if(root->left == nullptr && root->right == nullptr)
    {
        cout<<root->data<<endl;
    }
    Bottom_view(root->left);
    Bottom_view(root->right);
}

int main()
{
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(6);
    root->left->left = new node(3);
    root->left->right = new node(4);
    root->right->left = new node(7);
    root->right->left->right = new node(5);
    Bottom_view(root);
}