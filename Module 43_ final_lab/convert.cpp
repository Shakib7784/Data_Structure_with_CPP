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


int main()
{

     int val;
     cin>>val;
    Tree *root = new Tree(val);
    queue<Tree *>q;
    q.push(root);
     priority_queue<int, vector<int>> pq;
    while(!q.empty())
    {
        Tree *connectNode = q.front();
        pq.push(connectNode->value);
        q.pop();
        int left,right;
        cin>>left>>right;
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
        }

        int v;
        cin>>v;
        while(v--)
        {
            int c;
            cin>>c;
            if(c==2)
            {
                cout<<pq.top()<<endl;
                pq.pop();
            }
            else if(c==1)
            {
                int num;
                cin>>num;
                pq.push(num);
            }
        }



}


