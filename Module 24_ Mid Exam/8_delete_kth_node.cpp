#include<bits/stdc++.h>
using namespace std;

class Node
{
public :
    int value;
    Node *Next;
    Node(int v)
    {
        value=v;
        Next=NULL;
    }
};

void insert_at_tail(Node *&head,int value)
{
    Node *newnode = new Node(value);
    if(head==NULL)
    {
        head=newnode;
    }
    else
    {
            Node *temp = head;
            while(temp->Next!=NULL)
            {
                temp=temp->Next;
            }
            temp->Next=newnode;
    }
}
void display(Node *&head)
{
    if(head==NULL)
    {
        cout<<"Linked list is empty"<<endl;
    }
    else
    {
        Node *temp=head;
        while(temp!=NULL)
        {
            cout<<temp->value;
            if(temp->Next!=NULL)
            {
                cout<<"=>";
            }
            temp=temp->Next;
        }
        cout<<endl;
    }
}

void deleteKNodes(Node *&head, int m, int n)
{
   Node *current=head;

    while (1)
    {
        int c=1;
         while(current!=NULL && c<m)
        {
            current=current->Next;
            c++;
        }
        if(current==NULL)
        {
            return;
        }
        Node *sdel = current->Next;
        int cc=1;
        while(sdel!=NULL && cc<=n)
        {
            Node *delnode = sdel;
            sdel=sdel->Next;
            delete (delnode);
            cc++;
        }
        current->Next = sdel;
        current = sdel;
    }

}
int main()
{
    Node *head = NULL;
    int n,m,nn;
   cout<<"enter total number of elements"<<endl;
   cin>>n>>m>>nn;
   while(n--)
   {
       int v;
       cin>>v;
       insert_at_tail(head,v);
   }

   deleteKNodes(head,m,nn);
   display(head);
}

