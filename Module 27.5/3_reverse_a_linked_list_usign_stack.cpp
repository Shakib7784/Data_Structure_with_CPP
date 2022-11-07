#include<bits/stdc++.h>
using namespace std;
class Node
{
public :
    int value;
    Node *Next;
    Node(int val)
    {
        value =val;
        Next =NULL;
    }
};
void insert_attail(Node *&head, int val)
{
    Node *newnode = new Node(val);
    if(head==NULL)
    {
        head = newnode;
    }
    else
    {
        Node * temp = head;
        while(temp->Next!=NULL)
        {
            temp=temp->Next;
        }
        temp->Next = newnode;
    }
}
void display(Node *&head)
{
    if(head==NULL)
    {
        cout<<"linked list is empty"<<endl;

    }
    else
    {
        Node *temp=head;
        while(temp!=NULL)
        {
            cout<<temp->value<<endl;
            temp=temp->Next;
        }
    }
}
void reverse_linkedlist(Node *& head)
{
    stack<int>s;
    Node *temp=head;
    while(temp!=NULL)
    {
        s.push(temp->value);
        temp=temp->Next;
    }
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
}
int main()
{
    Node * head=NULL;
    int n;
    cin>>n;
    while(n--)
    {
        int val;
        cin>>val;
        insert_attail(head,val);
    }
    reverse_linkedlist(head);
    //display(head);

}
