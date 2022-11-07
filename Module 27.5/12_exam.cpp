#include<bits/stdc++.h>
using namespace std;
class Node
{
public :
    int value;
    Node *Next;
    //constructor creation
    Node(int val)
    {
        value=val;
        Next=NULL;
    }
};
void display(Node *h)
{
    while(h!=NULL)
    {
        cout<<h->value<<endl;
        h=h->Next;

    }
}
void insertAtTail(Node* &head, int v )
{
        Node *NewNode = new Node(v);
        if(head==NULL)
        {
            head=NewNode; // holding the address of new node
        }
        else
        {
            Node *temp = head;
            while(temp->Next!=NULL)
            {
                temp=temp->Next;
            }
            temp->Next=NewNode; // holding the address of new node
        }
}

Node* delete_sum(Node * &head )
{
    Node * store = new Node(0);
    store->Next = head;
    Node *temp = store;
    while(temp!=NULL)
    {
         int sum=0;
        while(head!=NULL)
        {
             sum += head->value;
                if(sum==0)
            {
                temp->Next = head->Next;
            }
            head=head->Next;
        }
            temp=temp->Next;
        if(temp!=NULL)
        {
            head=temp->Next;
        }
    }
    return store->Next;
}
int main()
{
    Node * head = NULL;
    int n;
    cin>>n;
    while(n--)
    {
        int val;
        cin>>val;
        insertAtTail(head,val);
    }
  head=  delete_sum(head);

    display(head);
}
