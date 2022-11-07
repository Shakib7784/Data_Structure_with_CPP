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

int printArray(int ints[], int len);






int printPathsRecur(Tree* node, int path[], int pathLen, stack<int>&ss)
{
    int t;
    static int sum=0;
    if (node == NULL)
    {
        return 0;

    }

    /* append this node to the path array */
    path[pathLen] = node->value;
    pathLen++;

    /* it's a leaf, so print the path that lead to here */
    if (node->leftchild == NULL && node->rightchild == NULL)
    {
       t = printArray(path, pathLen);
       sum=sum+t;
       ss.push(sum);

    }
    else
    {
        /* otherwise try both subtrees */
        printPathsRecur(node->leftchild, path, pathLen,ss);
        printPathsRecur(node->rightchild, path, pathLen,ss);
    }
    return 0;
}
int printArray(int ints[], int len)
{
    int i;
    static int sum=0;
//    for (i = 0; i < len; i++)
//    {
//        cout << ints[i] << " ";
//    }
int c=0;
    for( i=0;i<=len/2;i++)
    {

        if(ints[i]!=ints[len-i-1])
        {
            c++;
            break;
        }
    }

    if(c==0)
    {

        return 1;

    }
    else
    {
        return 0;
    }

}




void printPaths(Tree* node)
{

    stack<int>s;
    int path[1000];
   int t= printPathsRecur(node, path, 0,s);
   cout<<s.top();
}









int main()
{

    string s;
    cin>>s;
     int val;
     cin>>val;
    Tree *root = new Tree(s[val]);
    queue<Tree *>q;
    q.push(root);

    while(!q.empty())
    {

        Tree *connectNode = q.front();

        q.pop();
        int left,right;
        cin>>left>>right;
        Tree *leftNode = NULL;
        Tree *rightNode = NULL;
        if(left!=-1)
        {
            leftNode = new Tree(s[left]);
        }
        if(right!=-1)
        {
            rightNode=new Tree(s[right]);
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
    }

 printPaths(root);
    }



