#include<bits/stdc++.h>
using namespace std;
class Tree
{
public:
    int value;
    Tree *leftchild;
    Tree *rightchild;
    Tree(int val)
    {
        value=val;
        leftchild=NULL;
        rightchild = NULL;
    }
};
void postorder(Tree *root, string &post)
{
    if(root==NULL)
    {
        return ;
    }
    postorder(root->leftchild,post);
    postorder(root->rightchild,post);
    post +=to_string(root->value);
}
int main()
{
    int n,t;
    cin>>n>>t;
    int val, left,right;
    cin>>val>>left>>right;
    Tree *root = new Tree(val);
    queue<Tree *>q;
    q.push(root);
    int i=1;
    while(!q.empty())
    {
        Tree *connectNode = q.front();
        q.pop();
        if(i>1)
        {
            cin>>val>>left>>right;
        }
        Tree *leftNode = NULL;
        Tree *rightNode = NULL;
        if(left!=-1)
        {
            leftNode = new Tree(left);
        }
        if(right!=-1)
        {
            rightNode=new Tree(right);
        }
        connectNode->leftchild = leftNode;
        connectNode->rightchild=rightNode;
        if(leftNode!=NULL)
        {
            q.push(leftNode);
        }
        if(rightNode!=NULL)
        {
            q.push(rightNode);
        }
         i++;
        }

      string post  ="";
      postorder(root,post);
      cout<<post[t-1];

    }

