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

int findmax(Tree *root, int level)
{
    if(root ==NULL)
    {
        return -1;
    }
    queue<Tree *>qq;
    qq.push(root);
    qq.push(NULL);
      int ma = -1000;
      int l=0;
    while(!qq.empty())
    {
        Tree *checkdata = qq.front();
        qq.pop();

        if(checkdata!=NULL)
        {

           if(l==level)
           {
               if(ma<checkdata->data)
               {
                   ma=checkdata->data;
               }
           }
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

            if(!qq.empty())
            {
                qq.push(NULL);
                l++;
            }
        }
    }
    return ma;
}
int searchposition(int I[],int curr,int s,int e)
{
    for(int i=s;i<e;i++)
    {
        if(curr==I[i])
        {
            return i;
        }
    }
    return -1;
}
Tree * construct_Tree ( int pre[], int ino[], int start, int endd)
{
    static int n=0; // when we will call function recursively that time n will not assign 0 again. n will hold it's current value;
    /*
    Static variables in a Function: When a variable is declared as static, space for it gets allocated for the lifetime of the program.
     Even if the function is called multiple times, space for the static variable is allocated only once and the value of variable in the previous call gets carried through the next function call.
    This is useful for implementing coroutines in C/C++ or any other application where previous state of function needs to be stored.

    */
    int current = pre[n];
    n++;
    Tree * newnode = new Tree(current);

    if(start==endd)
    {
        return newnode;
    }
    int pos = searchposition(ino,current,start,endd);
    newnode->leftchild = construct_Tree(pre,ino,start,pos-1);
    newnode->rightchild = construct_Tree(pre,ino,pos+1,endd);
    return newnode;

}
int main()
{
   int n;
   cin>>n;
   int pre[n],ino[n];
   for(int i=0;i<n;i++)
   {
       cin>>pre[i];
   }
   for(int i=0;i<n;i++)
   {
       cin>>ino[i];
   }
   // tree after constructing
   Tree *root = construct_Tree(pre,ino,0,n-1);
   string result ="";
   preorder(root,result);
   cout<<result;
}
/*
9
0 1 3 4 2 5 7 8 6
3 1 4 0 7 5 8 2 6

*/


