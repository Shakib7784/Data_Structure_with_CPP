#include<bits/stdc++.h>
using namespace std;
class Tree
{
public:
    int data;
    Tree *leftchild;
    Tree *rightchild;
    Tree (int val)
    {
        data = val;
        leftchild = NULL;
        rightchild = NULL;
    }
};
void Inorder(Tree *root, string &in)
{
    if(root ==NULL)
    {
        return;
    }

    Inorder(root->leftchild,in);
     in += to_string(root->data);
    Inorder(root->rightchild,in);
}
Tree * invert_tree(Tree* root)
{
    if(root==NULL)
    {
        return root;
    }
    else
    {
        invert_tree(root->leftchild);
        invert_tree(root->rightchild);
        swap(root->leftchild,root->rightchild);
        return root;
    }
}
int main()
{

    int n;
    cin>>n;
    int value, left, right;
    cin>>value>>left>>right;
    Tree *root = new Tree (value);
    queue< Tree *> q;
    q.push(root);

    int i =1;
    while(!q.empty())
    {
        Tree *presentnode = q.front();
        q.pop();
        if(i>1)
        {
            cin>>value>>left>>right;
        }
        Tree *leftnode = NULL;
        Tree *rightnode = NULL;
        if(left!=-1)
        {
            leftnode = new Tree (left);
        }
        if(right!=-1)
        {
            rightnode = new Tree (right);
        }
        presentnode->leftchild = leftnode;
        presentnode->rightchild = rightnode;
        if(leftnode!=NULL)
        {
            q.push(leftnode);
        }
        if(rightnode!=NULL)
        {
            q.push(rightnode);
        }

        i++;
    }
    string st="";
    Inorder(root,st);
    cout<<"Before Invert : "<<st<<endl;
    Tree *result = invert_tree(root);

    string ss="";
    Inorder(result,ss);
    cout<<"After Invert : "<<ss<<endl;
}


