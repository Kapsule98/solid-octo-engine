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

bool find_path(node* root,node* target,vector<int>path)
{
    if(root == nullptr)
    {
        return false;
    }
    path.push_back(root->data);
    if(root->data == target->data)
    {
        return true;
    }
    
    if(find_path(root->left,target,path) || find_path(root->right,target,path))
    {
        return true;
    }
    else
    {
        path.pop_back();
        return false;
    }
}

node* LCA(node* root,node* a,node* b)
{
    vector<int> patha;
    vector<int> pathb;
    find_path(root,a,patha);
    cout<<patha.size();
    for(int i=0;i<patha.size();i++)
    {
        cout<<patha[i]<<endl;
    }
    return root;
   /* if(find_path(root,a,patha) && find_path(root,b,pathb))
    {
        int i=0;
        while(patha[i]->data == pathb[i]->data)
        {
            i++;
        }
        return patha[i];
    }
    */

}
node* Create_Tree()
{
    node* root = new node(2);
    root->right = new node(3);
    root->left = new node(1);
    return root;
}

int main()
{
    node* root = Create_Tree();
    node* p = LCA(root,root->right,root->left);
    //cout<<p->data;
    return 0;
}