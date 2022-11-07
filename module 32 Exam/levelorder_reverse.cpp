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
void level_order_reverse(Tree *root, vector<int>&st)
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
            //cout<<checkdata->data<<" ";
            st.push_back(checkdata->data);
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
                 st.push_back(-1);
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
  vector<int>t;
  stack<int>s;
    level_order_reverse(root, t);
    for(int i=t.size()-1;i>=0;i--)
    {
        if(t[i]!=-1)
        {
            s.push(t[i]);
        }
        else if(t[i]==-1)
        {
            while(!s.empty())
            {
                cout<<s.top();
                s.pop();
            }
            cout<<endl;
        }
    }
    while(!s.empty())
    {
        cout<<s.top();
                s.pop();
    }

}


