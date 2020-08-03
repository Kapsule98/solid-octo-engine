#include<bits/stdc++.h>
using namespace std;

class node
{
    public: 
    int data;
    node* left;
    node* right;

    node(int x)
    {
        this->data = x;
        this->left = nullptr;
        this->right = nullptr;
    }
};

// Pass map by reference 
void Vertical_Order(node* root,map<int,vector<int>> &rank_hash, int rank)
{
    if(root == nullptr)
    {
        return;
    }
    rank_hash[rank].push_back(root->data);
    Vertical_Order(root->right,rank_hash,rank+1);
    Vertical_Order(root->left,rank_hash,rank-1);
}

node* Create_Tree()
{
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    return root;
}

int main()
{
    node* root = Create_Tree();
    map<int,vector<int>> rank_hash;
    Vertical_Order(root,rank_hash,0);
    map<int,vector<int>>::iterator i;
    for(i=rank_hash.begin();i!=rank_hash.end();i++)
    {
        int size = i->second.size();
        for(int j=0;j<size;j++)
        {
            cout<<i->second[j]<<" ";
        }
        cout<<endl;
    }
}