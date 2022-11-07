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
void preorder(Tree *root, string &in)
{
    if(root ==NULL)
    {
        return;
    }
    in += to_string(root->data);
    preorder(root->leftchild,in);
    preorder(root->rightchild,in);
}
int main()
{
    string leafnode="";
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
       if(leftnode==NULL && rightnode==NULL)
       {

          leafnode+=to_string(value);

       }
        i++;
    }
    cout<<leafnode;


}


