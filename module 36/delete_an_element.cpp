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
Tree * Inorder_successor(Tree * root)
{
    Tree *current = root;
    while(current->leftchild!=NULL)
    {
        current=current->leftchild;
    }
    return current;
}
Tree * delete_value(Tree *root, int value)
{
    if(value<root->data)
    {
       root->leftchild = delete_value(root->leftchild, value);
    }
    else if(value>root->data)
    {
        root->rightchild=delete_value(root->rightchild,value);
    }
    else
    {
        //case 1 and 2
        if(root->leftchild==NULL) // this condition will cover both case 1 and 2. because for leaf node(case 1) if we found left child of root null then temp = rightchild, here rightchild also null. then root will be deleted, and null will returned.
        {
            Tree *temp = root->rightchild;
            free(root);
            return temp;
        }
        else if(root->rightchild==NULL)
        {
            Tree *temp=root->leftchild;
            free(root);
            return temp;
        }
        else
        {
            Tree * temp = Inorder_successor(root->rightchild);
            root->data =temp->data;
            root->rightchild = delete_value(root->rightchild, temp->data);
        }
        return root;
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
    cout<<"enter deleted value"<<endl;
    cin>>v;

    root= delete_value(root, v);
     string s="";
     Inorder(root, s);
     cout<<s;

}


/*
10
11 5 9 43 34 1 2 7 8 21
*/



