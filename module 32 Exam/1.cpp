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

bool is_unival(Tree *root)
{
    if(root==NULL)
    {
        return true;
    }
    if(root->leftchild!=NULL)
    {
        if(root->data != root->leftchild->data)
        {
            return false;
        }
    }
    if(root->rightchild!=NULL)
    {
        if(root->data != root->rightchild->data)
        {
            return false;
        }
    }

    is_unival(root->leftchild);
    is_unival(root->rightchild);

}

bool issame(Tree *root1, Tree *root2)
{
    if(root1==NULL && root2==NULL)
    {
        return true;
    }
     if(root1==NULL || root2==NULL)
    {
        return false;
    }
    if(root1!=NULL && root2!=NULL)
    {
        return(root1->data==root2->data &&
        issame(root1->leftchild, root2->leftchild )&&
           issame(root1->rightchild,root2->rightchild));

    }

    return false;
}
int main()
{
    Tree* root1 = new Tree(1);
    Tree* root2 = new Tree(1);
    root1->leftchild = new Tree(2);
    root1->rightchild= new Tree(3);
    root1->leftchild->leftchild = new Tree(4);
    root1->leftchild->rightchild = new Tree(5);

    root2->leftchild = new Tree(2);
    root2->rightchild = new Tree(3);
    root2->leftchild->leftchild = new Tree(4);
    root2->leftchild->rightchild = new Tree(5);

    bool result = issame(root1, root2);
    cout<<result;


}





