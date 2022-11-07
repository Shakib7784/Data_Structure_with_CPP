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
void Inorder(Tree *root, vector<int>&v)
{
    if(root ==NULL)
    {
        return;
    }

    Inorder(root->leftchild,v);
    v.push_back(root->data);
    Inorder(root->rightchild,v);
}

int second_minimun(Tree *root)
{
     vector<int>result;
    Inorder(root,result);
    sort(result.begin(), result.end());
    int c=0;
    for(int i=0;i<result.size()-1;i++)
    {
       if(result[i]!=result[i+1])
       {
          return result[i+1];
       }
    }
    return -1;
}

int main()
{

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

        i++;
    }

   int result = second_minimun(root);
   cout<<result<<endl;

}
/*
5
2 2 5
2 -1 -1
5 5 7
5 -1 -1
7 -1 -1
*/


