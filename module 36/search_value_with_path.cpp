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
Tree * search_value(Tree *root, int value)
{
    if (root ==NULL)
    {
        return NULL ;
    }
    if(root->data==value)
    {
        cout<<root->data<<endl;
        return root;
    }
    else if(value <root->data)
    {
        cout<<root->data<<"->";
        search_value(root->leftchild, value);
    }
    else
    {
        cout<<root->data<<"->";
        search_value(root->rightchild,value);
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
    int v;
    cout<<"enter search value"<<endl;
    cin>>v;

     Tree *result = search_value(root, v);
    if(result==NULL)
    {
        cout<<endl<<"value is not exist"<<endl;
    }
    else
    {
        cout<<"value is exist"<<endl;
    }
}


/*
9
11 5 9 43 34 1 2 7 21
*/


