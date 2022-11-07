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
Node* reverseKNodes(Node *&head, int k)
{
    Node * prev=NULL;
    Node * current=head;
    Node * next;
    int c=0;
    while(current!=NULL && c<k)
    {
        next=current->Next;
        current->Next=prev;
        prev=current;
        current=next;
        c++;
    }
    if(next!=NULL)
    {
       head->Next= reverseKNodes(next,k);
    }
    return prev;
}
int main()
{
    Node *head = NULL;
    int n;
   cout<<"enter total number of elements"<<endl;
   cin>>n;
   while(n--)
   {
       int v;
       cin>>v;
       insert_at_tail(head,v);
   }
   int k;
   cin>>k;
   head=reverseKNodes(head,k);
   display(head);
}
