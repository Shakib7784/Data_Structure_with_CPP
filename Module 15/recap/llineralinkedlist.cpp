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
insertAtHead(Node* &head, int v)
{
    Node * newnode = new Node(v);
    if(head==NULL)
    {
        head = newnode;
    }
    else
    {
        Node * temp = head;
        head=newnode;
        head->Next=temp;
      /*
        // or we can do
        // s1: new node creation
       Node * newnode = new Node(v);
        // update of new node => to head
        newnode->Next = head;
        // update of head
        head=newnode; */
    }
}
int length(Node *&head)
{
    int c=0;
    Node * newnode = head;
    while(newnode!= NULL)
    {
        c++;
        newnode=newnode->Next;
    }
    return c;
}
int main()
{
    Node *head=NULL;
    int n;
    cout<<"How many value do you want to insert: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a;
        cout<<"Enter value: "<<endl;
        cin>>a;
        cout<<"want to insert value at head or tail? (h/t)"<<endl;
        char ch;
        cin>>ch;
        if(ch=='h'||ch=='H')
        {
             insertAtHead(head,a);
        }
        else if(ch=='t'|| ch=='T')
        {
              insertAtTail(head,a);
        }



    }
    cout<<endl;
    cout<<"Linked List: ";
    display(head);/// we are not passing here address of head because linked list work like an array. array does not need address when we pass array.
    cout<<endl<<"Length of Linked List:"<<endl;
   int len= length(head);
   cout<<len;




}
