#include<bits/stdc++.h>
using namespace std;
class TreeNode
{
public:
    int data;
    TreeNode *leftchild;
    TreeNode *rightchild;
    TreeNode(int val)
    {
        data = val;
        leftchild = NULL;
        rightchild = NULL;

    }
};
void spaceprint(int level);
void printTree(TreeNode *root, int level);
void printTree(TreeNode *root, int level)
{
    if(root==NULL)
    {
        return;
    }
    if(root->leftchild == NULL && root->rightchild == NULL)
    {

         cout<<root->data<<endl;
         return;
    }
   else
   {
       cout<<endl;
        spaceprint(level);
        cout<<"Root : "<<root->data<<endl;
   }
   if(root->leftchild!=NULL)
   {
       spaceprint(level);
        cout<<"Left : ";
       printTree(root->leftchild , level+1);
   }
   if(root->rightchild !=NULL)
   {
       spaceprint(level);
        cout<<"Right : ";
        printTree(root->rightchild , level+1);
   }



}

void spaceprint(int level)
{
    for(int i=0;i<level;i++)
    {
        cout<<"   ";
    }
}
void INorder(TreeNode *root, string &check)
{
    if(root == NULL)
    {
        return;
    }
    INorder(root->leftchild,check);
    check+= to_string(root->data);
    INorder(root->rightchild,check);
}
void Postorder(TreeNode *root, string &st)
{
    if(root ==NULL)
    {
        return;
    }
    Postorder(root->leftchild,st);
    Postorder(root->rightchild, st);
    st += to_string(root->data);
}
void preorder(TreeNode *root, string &pre)
{
    if(root==NULL)
    {
        return;
    }
    pre += to_string(root->data);
    preorder(root->leftchild, pre);
    preorder(root->rightchild,pre);
}
int main()
{
    int n;
    cin>>n;
    TreeNode *arr[n];
    for(int i=0;i<n;i++)
    {
       arr[i]  = new TreeNode(-1);
    }
    for(int i=0;i<n;i++)
    {
        int val, left,right;
        cin>>val>>left>>right;
        arr[i]->data = val;
        if(left>n-1 || right >n-1)
        {
            cout<<"Invalid"<<endl;
            break;
        }
        if(left!=-1)
        {
            arr[i]->leftchild = arr[left];
        }
        if(right!=-1)
        {
            arr[i]->rightchild = arr[right];
        }
    }
    printTree(arr[0],0);
    string s=" ";
    INorder(arr[0],s);
    cout<<"Inorder : "<<s<<endl;
    string ss = " ";
    Postorder(arr[0],ss);
    cout<<"postorder : "<<ss<<endl;
    string pre=" ";
    preorder(arr[0],pre);
    cout<<"preorder : "<<pre<<endl;

}



/*
9
0 1 2
1 3 4
2 5 6
3 -1 -1
4 -1 -1
5 7 8
6 -1 -1
7 -1 -1
8 -1 -1
 */




















