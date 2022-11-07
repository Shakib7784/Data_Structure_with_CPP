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
void inorder(Tree *root, string &in)
{
    if(root ==NULL)
    {
        return;
    }
    inorder(root->leftchild,in);
    in += to_string(root->data);
    inorder(root->rightchild,in);
}
int main()
{
    int n,t;
    cin>>n>>t;
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
    string ino ="";
    inorder(root,ino);
    cout<<ino[t-1];

}
