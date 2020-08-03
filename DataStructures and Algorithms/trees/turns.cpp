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

bool Is_Present(node *root,node *a)
{
    if(root == nullptr)
    {
        return false;
    }
    if(root->data == a->data)
    {
        return true;
    }
    return Is_Present(root->left,a) || Is_Present(root->right,a);
}

node *LCA(node *root,node *a,node *b)
{
    if(root == nullptr)
    {
        return nullptr;
    }
    if(root->data == a->data || root->data == b->data)
    {
        return root;
    }
    bool left = Is_Present(root->left,a) && Is_Present(root->left,b);
    bool right = Is_Present(root->right,a) && Is_Present(root->right,b);

    if(left)
    {
        return LCA(root->left,a,b);
    }
    if(right)
    {
        return LCA(root->right,a,b);
    }
    if(!left && !right)
    {
        return root;
    }

}

bool find_node(node *a,node *b,bool right,int *turns)
{
    if(a == nullptr)
    {
        return false;
    }
    if(a->data == b->data)
    {
        return true;
    }
    if(right)
    {
        if(find_node(a->right,b,true,turns))
        {
            return true;
        }
        if(find_node(a->left,b,false,turns))
        {
            *turns += 1;
            return true;
        }
    }
    if(!right)
    {
        if(find_node(a->right,b,true,turns))
        {
            *turns += 1;
            return true;
        }
        if(find_node(a->left,b,false,turns))
        {
            return true;
        }
    }
    return false;
}

int Count_Turns(node *root,node *a,node *b)
{
    if(root == nullptr || a == nullptr || b == nullptr)
    {
        return -1;
    }
    node *lca = LCA(root,a,b);

    if(lca == nullptr)
    {
        return -1;
    }
    if(lca->data == a->data)
    {
        int count =0;
        if(find_node(lca->right,b,true,&count) || find_node(lca->left,b,false,&count))
        {
            return count;
        }
    }
    if(lca->data == b->data)
    {
        int count = 0;
        if(find_node(lca->right,a,true,&count) || find_node(lca->left,a,false,&count))
        {
            return count;
        }
    }
    if(lca->data != a->data && lca->data != b->data)
    {
        int count =0;
        bool afound = find_node(lca->left,a,false,&count) || find_node(lca->right,a,true,&count);
        bool bfound = find_node(lca->left,b,false,&count) || find_node(lca->right,b,true,&count);
        if(afound && bfound)
        {
            return count+1;
        }
    }

}

node *Create_Tree()
{
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->right = new node(4);
    return root;
}

int main()
{
    node *root = Create_Tree();
    cout<<Count_Turns(root,root->right,root->left->right)<<endl;
}