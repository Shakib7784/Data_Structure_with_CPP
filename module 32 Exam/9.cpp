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
void average_level(Tree *root, vector<int>&st)
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

                qq.push(NULL);
            }
             st.push_back(-1);
        }
    }
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
    bool result = is_unival(root);
    if(result==false)
    {
        cout<<"This is not an uni-valued tree."<<endl;

    }
    else
    {
        cout<<"This is an uni-valued tree"<<endl;

    }


}




