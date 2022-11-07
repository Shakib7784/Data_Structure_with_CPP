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
// printing level order best way
void level(Tree *root)
{
    queue<Tree *>qq;
    qq.push(root);
    qq.push(NULL);
    while(!qq.empty())
    {
        Tree *checkdata = qq.front();
        qq.pop();
        if(checkdata!=NULL)
        {
            cout<<checkdata->data<<" ";
            if(checkdata->leftchild!=NULL)
            {
                qq.push(checkdata->leftchild);
            }
            if(checkdata->rightchild!=NULL)
            {
                qq.push(checkdata->rightchild);
            }
        }
        else
        {
            cout<<endl;
            if(!qq.empty())
            {
                qq.push(NULL);
            }
        }
    }
}
int main()
{
    string l="";
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
        // level order print worst way
       // l +=to_string(presentnode->data);
       //cout<<"present Node"<<<<endl;
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
    level(root);
  //  cout<<"level wise node: "<<l<<endl;

}

