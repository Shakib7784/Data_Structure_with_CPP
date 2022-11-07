
#include<bits/stdc++.h>
using namespace std;
class Tree
{
public :
    int data;
    Tree *leftchild;
    Tree *rightchild;
    Tree (int value)
    {
        data=value;
        leftchild=NULL;
        rightchild=NULL;
    }
};
Tree *Binary_Search_Tree(Tree *root,int value)
{
    Tree *newnode = new Tree(value);
    if(root==NULL)
    {
        root =newnode;
        return root;
    }
    if(value<root->data)
    {
        root->leftchild= Binary_Search_Tree(root->leftchild,value);
    }
    else if(value>root->data)
    {
        root->rightchild = Binary_Search_Tree(root->rightchild, value);
    }
    return root;
}
void Inorder(Tree * root, string &st)
{
    if(root == NULL)
    {
        return;
    }
    Inorder(root->leftchild,st);
    st += to_string(root->data)+" ";
    Inorder(root->rightchild,st);
}

void Zigzag(Tree * root)
{
    stack<Tree *> currentlevel;
    stack <Tree *> Nextlevel;
    currentlevel.push(root);
    bool lefttoright =true;
    while(!currentlevel.empty())
    {
        Tree *temp = currentlevel.top();
        currentlevel.pop();
        cout<<temp->data<<" ";

        if(lefttoright==true)
        {
            if(temp->leftchild!=NULL)
            {
                Nextlevel.push(temp->leftchild);
            }
            if(temp->rightchild!=NULL)
            {
                Nextlevel.push(temp->rightchild);
            }
        }
        else
        {
            if(temp->rightchild!=NULL)
            {
                Nextlevel.push(temp->rightchild);
            }
            if(temp->leftchild!=NULL)
            {
                Nextlevel.push(temp->leftchild);
            }
        }
        if(currentlevel.empty())
        {
            lefttoright=!lefttoright;
            swap(currentlevel,Nextlevel);
        }
    }

}
int main()
{
    int n;
    cin>>n;
    Tree *root=NULL;
    for(int i=0;i<n;i++)
    {
        int value;
        cin>>value;
        root = Binary_Search_Tree(root,value);
    }
    string s="";
    Inorder(root,s);
    cout<<s<<endl;;

    cout<<endl<<"zigzag"<<endl;
    Zigzag(root);
}


/*
9
11 5 9 43 34 1 2 7 21
*/
