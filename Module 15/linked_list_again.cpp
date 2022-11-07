#include<bits/stdc++.h>
using namespace std;
class Node
{
public :
    int value;
    Node *Next;
    Node(int val)
    {
        value=val;
        Next=NULL;
    }
};
void Insertintail(Node* &he, int v)
{
    Node *newnode = new Node(v);
    if(he==NULL)
    {
        he=newnode;
    }
    else
    {

        Node *temp = he;
        while(temp->Next!=NULL)
        {
            temp=temp->Next;
        }
        temp->Next=newnode;
    }
}
void Inserthead(Node* &hhh, int vvv)
{
    Node *newnodehead = new Node(vvv);
    newnodehead->Next= hhh;
    hhh = newnodehead;
}
void display(Node *h)
{
    while(h!=NULL)
    {
        cout<<h->value<<endl;
        h=h->Next;
    }
}
int main()
{
    Node *Head = NULL;
    cout<<"how much value do you want to insert ?"<<endl;
    int n;
    cin>>n;
    while(n--)
    {
        cout<<"enter your value"<<endl;
        int vv;
        cin>>vv;
        cout<<"Head or Taile? (h/t) "<<endl;
       char ht;
        cin>>ht;
        if(ht=='h'|| ht=='H')
        {
            Inserthead(Head,vv);
        }
        else if(ht=='t'|| ht=='T')
        {
            Insertintail(Head,vv);
        }

    }

    display(Head);



}
